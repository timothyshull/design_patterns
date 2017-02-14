#ifndef DESIGN_PATTERNS_FUNCTION_PROTOTYPE_H
#define DESIGN_PATTERNS_FUNCTION_PROTOTYPE_H

#include <string>
#include <vector>

#include "Context.h"

class Function_prototype : public Expression {
public:
    Function_prototype(const std::string& name, std::vector<std::string> args)
            : _name{name},
              _args{std::move(args)} {}

    inline const std::string& get_name() const { return _name; }

    bool evaluate(Context& context);

private:
    std::string _name;
    std::vector<std::string> _args;
};

#endif // DESIGN_PATTERNS_FUNCTION_PROTOTYPE_H
