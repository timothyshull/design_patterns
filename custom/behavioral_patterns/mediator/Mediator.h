#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_

class Colleague;

class Mediator {
public:
    virtual ~Mediator();

    virtual void do_action_from_a_to_b() = 0;

    virtual void do_action_from_b_to_a() = 0;

protected:
    Mediator();

private:
};

class Concrete_mediator : public Mediator {
public:
    Concrete_mediator();

    Concrete_mediator(Colleague* clgA, Colleague* clgB);

    ~Concrete_mediator();

    void set_concrete_colleague_a(Colleague* clgA);

    void set_concrete_colleague_b(Colleague* clgB);

    Colleague* get_concrete_colleague_a();

    Colleague* get_concrete_colleague_b();

    void introduce_colleagues(Colleague* clgA, Colleague* clgB);

    void do_action_from_a_to_b();

    void do_action_from_b_to_a();

protected:

private:
    Colleague* _clg_a;
    Colleague* _clg_b;
};

#endif //~_MEDIATOR_H_
