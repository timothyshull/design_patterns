#ifndefsDESIGN_PATTERNS_RISC_CODE_GENERATOR_H
#definesDESIGN_PATTERNS_RISC_CODE_GENERATOR_H

#include "CodeGenerator.h"

class BytecodeStream;
class StatementNode;
class ExpressionNode;

class RISCCodeGenerator : public CodeGenerator {
public:
    RISCCodeGenerator(BytecodeStream&);
    virtual void Visit(StatementNode*);
    virtual void Visit(ExpressionNode*);
    // ...

};

#endif /* RISC_CODE_GENERATOR_H */
