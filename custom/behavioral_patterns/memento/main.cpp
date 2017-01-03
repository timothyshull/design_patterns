#include<iostream>
#include"Memento.h"

int main(int argc, char* argv[])
{
    Originator* o = new Originator();
    o->set_state("old");
    o->print_state();
    Memento* m = o->create_memento();
    o->set_state("new");
    o->print_state();
    o->restore_to_memento(m);
    o->print_state();
    return 0;
}
