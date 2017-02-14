#ifndef DESIGN_PATTERNS_INTERPRETER_H
#define DESIGN_PATTERNS_INTERPRETER_H

#include "Expression.h"
#include "Function_prototype.h"
#include "Function_definition.h"
#include "Token_stream.h"
#include "Number_expression.h"

class Interpreter {
public:
    Interpreter(Token_stream& ts, Context& ctx);

    void interpret();

    void handle_definition();

    void handle_extern();

    void handle_top_level_expression();

    std::unique_ptr<Expression> parse_expression();

    std::unique_ptr<Number_expression> parse_number_expr();

    std::unique_ptr<Expression> parse_paren_expr();

    std::unique_ptr<Expression> parse_identifier_expr();

    std::unique_ptr<Expression> parse_primary();

    std::unique_ptr<Expression> parse_bin_op_rhs(int expression_prec, std::unique_ptr<Expression> lhs);

    std::unique_ptr<Function_prototype> parse_prototype();

    std::unique_ptr<Function_definition> parse_definition();

    std::unique_ptr<Function_definition> parse_top_level_expr();

    std::unique_ptr<Function_prototype> parse_extern();

    int get_token_precedence();

    std::unique_ptr<Expression> log_error(std::string&& err);

    std::unique_ptr<Function_prototype> log_error_p(std::string&& err);

    inline int get_error_count() const noexcept { return  _no_of_errors; };

private:
    int _no_of_errors;
    Token_stream& _ts;
    Context& _context;
};

#endif // DESIGN_PATTERNS_INTERPRETER_H
