#ifndefsDESIGN_PATTERNS_PARSER_H
#definesDESIGN_PATTERNS_PARSER_H

class ProgramNodeBuilder;

class Parser {
public:
    Parser();
    virtual ~Parser();

    virtual void Parse(Scanner&, ProgramNodeBuilder&);
};

#endif /* PARSER_H */
