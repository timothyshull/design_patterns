#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy {
public:
    Strategy();

    virtual ~Strategy();

    virtual void algorithm_interface() = 0;
};

class Concrete_strategy_a : public Strategy {
public:
    Concrete_strategy_a();

    virtual ~Concrete_strategy_a();

    void algorithm_interface();
};

class Concrete_strategy_b : public Strategy {
public:
    Concrete_strategy_b();

    virtual ~Concrete_strategy_b();

    void algorithm_interface();
};

#endif //STRATEGY_H
