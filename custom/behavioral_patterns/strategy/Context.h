#ifndef CONTEXT_H
#define CONTEXT_H

class Strategy;

class Context {
public:
    Context(Strategy* stg);

    ~Context();

    void do_action();

private:
    Strategy* _stg;
};

#endif //CONTEXT_H
