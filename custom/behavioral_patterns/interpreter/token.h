#ifndef DESIGN_PATTERNS_TOKEN_H
#define DESIGN_PATTERNS_TOKEN_H

#include <string>

enum class Token_class : char {
    end,
    def,
    external,
    name,
    number,
    plus = '+',
    minus = '-',
    mul = '*',
    div = '/',
    print = ';',
    assign = '=',
    lp = '(',
    rp = ')',
    comma = ','
};

struct Token {
    Token_class token_class;
    std::string repr{""};
    double number_value{0.0};
};

#endif // DESIGN_PATTERNS_TOKEN_H
