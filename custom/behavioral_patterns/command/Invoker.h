#ifndef DESIGN_PATTERNS_INVOKER_H
#define DESIGN_PATTERNS_INVOKER_H

class Command;

class Invoker {
public:
    Invoker(Command* cmd);

    ~Invoker();

    void invoke();

private:
    Command* _cmd;
};

#endif //DESIGN_PATTERNS_INVOKER_H
