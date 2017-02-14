#include "Token_stream.h"

Token Token_stream::get()
{
    char ch = 0;
    do {
        if (!_input->get(ch)) { return _ct = {Token_class::end}; }
    } while (ch != '\n' && isspace(ch));

    switch (ch) {
        case '\0':
            return _ct = {Token_class::end};
        case ';':
        case '*':
        case '/':
        case '+':
        case '-':
        case '(':
        case ')':
        case '=':
            return _ct = {static_cast<Token_class>(ch)};
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '.':
            _input->putback(ch); // put the first digit (or .) back into the input stream
            *_input >> _ct.number_value; // read number into ct
            _ct.token_class = Token_class::number;
            return _ct;
        default: // name, name =, or error
            if (std::isalpha(ch)) {
                _ct.repr = ch;
                while (_input->get(ch) && isalnum(ch)) {
                    _ct.repr += ch;
                } // append ch to end of string_value
                _input->putback(ch);
                return _ct = {Token_class::name};
            }
            // error("bad token");
            return _ct = {Token_class::print};
    }

//    static int LastChar = ' ';
//
//    // Skip any whitespace.
//    while (isspace(LastChar)) {
//        LastChar = getchar();
//    }
//
//    if (isalpha(LastChar)) { // identifier: [a-zA-Z][a-zA-Z0-9]*
//        IdentifierStr = LastChar;
//        while (isalnum((LastChar = getchar()))) {
//            IdentifierStr += LastChar;
//        }
//
//        if (IdentifierStr == "def") {
//            return tok_def;
//        }
//        if (IdentifierStr == "extern") {
//            return tok_extern;
//        }
//        return tok_identifier;
//    }
//
//    if (isdigit(LastChar) || LastChar == '.') { // Number: [0-9.]+
//        std::string NumStr;
//        do {
//            NumStr += LastChar;
//            LastChar = getchar();
//        } while (isdigit(LastChar) || LastChar == '.');
//
//        NumVal = strtod(NumStr.c_str(), nullptr);
//        return tok_number;
//    }
//
//    if (LastChar == '#') {
//        // Comment until end of line.
//        do {
//            LastChar = getchar();
//        } while (LastChar != EOF && LastChar != '\n' && LastChar != '\r');
//
//        if (LastChar != EOF) {
//            return gettok();
//        }
//    }
//
//    // Check for end of file.  Don't eat the EOF.
//    if (LastChar == EOF) {
//        return tok_eof;
//    }
//
//    // Otherwise, just return the character as its ascii value.
//    int ThisChar = LastChar;
//    LastChar = getchar();
//    return ThisChar;
}

void Token_stream::set_input(std::istream& s)
{
    _close();
    _input = &s;
    _owns = false;
}

void Token_stream::set_input(std::istream* p)
{
    _close();
    _input = p;
    _owns = true;
}
