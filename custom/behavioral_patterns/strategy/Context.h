#ifndef DESIGN_PATTERNS_CONTEXT_H
#define DESIGN_PATTERNS_CONTEXT_H

class Strategy;

class Context {
public:
    Context(Strategy* stg);

    ~Context();

    void do_action();

private:
    Strategy* _stg;
};

#endif //DESIGN_PATTERNS_CONTEXT_H
