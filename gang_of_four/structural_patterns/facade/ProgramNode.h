#ifndefsDESIGN_PATTERNS_PROGRAM_NODE_H
#definesDESIGN_PATTERNS_PROGRAM_NODE_H

class CodeGenerator;

class ProgramNode {
public:
    // program node manipulation
    virtual void GetSourcePosition(int& line, int& index);
    // ...

    // child manipulation
    virtual void Add(ProgramNode*);
    virtual void Remove(ProgramNode*);
    // ...

    virtual void Traverse(CodeGenerator&);
protected:
    ProgramNode();
};

#endif /* PROGRAM_NODE_H */
