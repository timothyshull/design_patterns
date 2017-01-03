#ifndef DESIGN_PATTERNS_COLLAGE_H
#define DESIGN_PATTERNS_COLLAGE_H

#include<string>

class Mediator;

class Colleague {
public:
    virtual ~Colleague();

    virtual void action() = 0;

    virtual void set_state(const std::string& sdt) = 0;

    virtual std::string get_state() = 0;

protected:
    Colleague();

    Colleague(Mediator* mdt);

    Mediator* _mdt;
};

class Concrete_colleague_a : public Colleague {
public:
    Concrete_colleague_a();

    Concrete_colleague_a(Mediator* mdt);

    ~Concrete_colleague_a();

    void action();

    void set_state(const std::string& sdt);

    std::string get_state();

private:
    std::string _sdt;
};

class Concrete_colleague_b : public Colleague {
public:
    Concrete_colleague_b();

    Concrete_colleague_b(Mediator* mdt);

    ~Concrete_colleague_b();

    void action();

    void set_state(const std::string& sdt);

    std::string get_state();

private:
    std::string _sdt;
};

#endif //DESIGN_PATTERNS_COLLAGE_H
