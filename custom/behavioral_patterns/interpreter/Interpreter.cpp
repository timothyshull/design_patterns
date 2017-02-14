#include <cctype>
#include <memory>

#include "Interpreter.h"
#include "Variable_expression.h"
#include "Call_expression.h"
#include "Binary_expression.h"

Interpreter::Interpreter(Token_stream& ts, Context& ctx) : _ts{ts}, _context{ctx} {}

void Interpreter::interpret()
{
    for (;;) {
        std::cerr << "> ";
        _ts.get();
        switch (_ts.current().token_class) {
            case Token_class::end:
                return;
            case Token_class::print:
                break;
            case Token_class::def:
                handle_definition();
                break;
            case Token_class::external:
                handle_extern();
                break;
            default:
                handle_top_level_expression();
                break;
        }
    }
}

void Interpreter::handle_definition()
{
    if (parse_definition()) {
        std::cerr << "Parsed a function definition.\n";
    } else {
        _ts.get();
    }
}

void Interpreter::handle_extern()
{
    if (parse_extern()) {
        std::cerr << "Parsed an extern\n";
    } else {
        _ts.get();
    }
}

void Interpreter::handle_top_level_expression()
{
    if (parse_top_level_expr()) {
        std::cerr << "Parsed a top-level expr\n";
    } else {
        _ts.get();
    }
}

std::unique_ptr<Expression> Interpreter::parse_expression()
{
    auto lhs = parse_primary();
    if (!lhs) {
        return nullptr;
    }

    return parse_bin_op_rhs(0, std::move(lhs));
}

std::unique_ptr<Number_expression> Interpreter::parse_number_expr()
{
    auto result = std::make_unique<Number_expression>(_ts.current().number_value);
    _ts.get();
    return result;
}

std::unique_ptr<Expression> Interpreter::parse_paren_expr()
{
    _ts.get();
    auto v = parse_expression();
    if (!v) {
        return nullptr;
    }

    if (_ts.current().token_class != Token_class::rp) {
        return log_error("expected ')'");
    }
    _ts.get();
    return v;
}

std::unique_ptr<Expression> Interpreter::parse_identifier_expr()
{
    std::string id_name = _ts.current().repr;

    _ts.get();

    if (_ts.current().token_class != Token_class::lp) {
        return std::make_unique<Variable_expression>(id_name);
    }

    _ts.get();
    std::vector<std::unique_ptr<Expression>> args;
    if (_ts.current().token_class != Token_class::rp) {
        while (true) {
            if (auto arg = parse_expression()) {
                args.push_back(std::move(arg));
            } else {
                return nullptr;
            }

            if (_ts.current().token_class == Token_class::rp) {
                break;
            }

            if (_ts.current().token_class != Token_class::comma) {
                return log_error("Expected ')' or ',' in argument list");
            }
            _ts.get();
        }
    }

    _ts.get();

    return std::make_unique<Call_expression>(id_name, std::move(args));
}

std::unique_ptr<Expression> Interpreter::parse_primary()
{
    switch (_ts.current().token_class) {
        default:
            return log_error_p("unknown token when expecting an expression");
        case Token_class::name:
            return parse_identifier_expr();
        case Token_class::number:
            return parse_number_expr();
        case Token_class::lp:
            return parse_paren_expr();
    }
}

std::unique_ptr<Expression> Interpreter::parse_bin_op_rhs(int expression_prec, std::unique_ptr<Expression> lhs)
{
    while (true) {
        int token_precedence = get_token_precedence();

        if (token_precedence < expression_prec) {
            return lhs;
        }

        Token_class bin_op = _ts.current().token_class;
        _ts.get();

        auto rhs = parse_primary();
        if (!rhs) {
            return nullptr;
        }

        int next_precedence = get_token_precedence();
        if (token_precedence < next_precedence) {
            rhs = parse_bin_op_rhs(token_precedence + 1, std::move(rhs));
            if (!rhs) {
                return nullptr;
            }
        }

        lhs = std::make_unique<Binary_expression>(bin_op, std::move(lhs), std::move(rhs));
    }
}

std::unique_ptr<Function_prototype> Interpreter::parse_prototype()
{
    if (_ts.current().token_class != Token_class::name) {
        return log_error_p("Expected function name in prototype");
    }

    std::string fn_name = _ts.current().repr;
    _ts.get();

    if (_ts.current().token_class != Token_class::lp) {
        return log_error_p("Expected '(' in prototype");
    }

    std::vector<std::string> arg_names;
    _ts.get();
    Token_class tmp = _ts.current().token_class;
    while (tmp == Token_class::name) {
        arg_names.push_back(_ts.current().repr);
        _ts.get();
        tmp = _ts.current().token_class;
    }
    if (_ts.current().token_class != Token_class::rp) {
        return log_error_p("Expected ')' in prototype");
    }

    _ts.get();

    return std::make_unique<Function_prototype>(fn_name, std::move(arg_names));
}

std::unique_ptr<Function_definition> Interpreter::parse_definition()
{
    _ts.get();
    auto proto = parse_prototype();
    if (!proto) {
        return nullptr;
    }

    if (auto e = parse_expression()) {
        return std::make_unique<Function_definition>(std::move(proto), std::move(e));
    }
    return nullptr;
}

std::unique_ptr<Function_definition> Interpreter::parse_top_level_expr()
{
    if (auto e = parse_expression()) {
        auto proto = std::make_unique<Function_prototype>("__anon_expr", std::vector<std::string>());
        return std::make_unique<Function_definition>(std::move(proto), std::move(e));
    }
    return nullptr;
}

std::unique_ptr<Function_prototype> Interpreter::parse_extern()
{
    _ts.get();
    return parse_prototype();
}

int Interpreter::get_token_precedence()
{
    // TODO: check on this
    if (!isascii(static_cast<char>(_ts.current().token_class))) {
        return -1;
    }

    int token_precedence;
    try {
        token_precedence = _context.get_operator_precedence(static_cast<char>(_ts.current().token_class));
    } catch (...) {
        return -1;
    }
    if (token_precedence <= 0) {
        return -1;
    }
    return token_precedence;
}

std::unique_ptr<Expression> Interpreter::log_error(std::string&& err)
{
    ++_no_of_errors;
    std::cerr << "Error: " << err << "\n";
    return nullptr;
}

std::unique_ptr<Function_prototype> Interpreter::log_error_p(std::string&& err)
{
    ++_no_of_errors;
    std::cerr << "Error: " << err << "\n";
    return nullptr;
}
