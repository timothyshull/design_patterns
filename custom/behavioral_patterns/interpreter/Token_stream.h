#ifndef DESIGN_PATTERNS_TOKEN_STREAM_H
#define DESIGN_PATTERNS_TOKEN_STREAM_H

#include <iostream>
#include <sstream>

#include "token.h"

class Token_stream {
public:
    Token_stream(std::istream& s) : _input{&s}, _owns{false} {}

    Token_stream(std::istream* p) : _input{p}, _owns{true} {}

    inline ~Token_stream() { _close(); }

    Token get();

    inline Token& current() noexcept { return _ct; };

    void set_input(std::istream& s);

    void set_input(std::istream* p);

private:
    inline void _close() { if (_owns) { delete _input; }}

    std::istream* _input;
    bool _owns;
    Token _ct{Token_class::end};
};

#endif // DESIGN_PATTERNS_TOKEN_STREAM_H
