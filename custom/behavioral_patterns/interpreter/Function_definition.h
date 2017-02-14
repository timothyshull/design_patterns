#ifndef DESIGN_PATTERNS_FUNCTION_DEFINITION_H
#define DESIGN_PATTERNS_FUNCTION_DEFINITION_H

#include <memory>

#include "Function_prototype.h"
#include "Expression.h"

class Function_definition : public Expression {
public:
    Function_definition(std::unique_ptr<Function_prototype> prototype, std::unique_ptr<Expression> body)
            : _prototype{std::move(prototype)},
              _body{std::move(body)} {}

    bool evaluate(Context& context);
//    {
//        return !_operand->evaluate(context);
//    }

private:
    std::unique_ptr<Function_prototype> _prototype;
    std::unique_ptr<Expression> _body;
};

#endif // DESIGN_PATTERNS_FUNCTION_DEFINITION_H
