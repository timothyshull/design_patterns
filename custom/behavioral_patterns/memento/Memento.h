#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

class Memento;

class Originator {
public:
    using State = std::string;

    Originator();

    Originator(const State& sdt);

    ~Originator();

    Memento* create_memento();

    void set_memento(Memento* men);

    void restore_to_memento(Memento* mt);

    State get_state();

    void set_state(const State& sdt);

    void print_state();

private:
    State _sdt;
    Memento* _mt;
};

class Memento {
private:
    friend class Originator;

    using State = std::string;

    Memento();

    Memento(const State& sdt);

    ~Memento();

    void set_state(const State& sdt);

    State get_state();

    // member
    State _sdt;
};

#endif //MEMENTO_H
