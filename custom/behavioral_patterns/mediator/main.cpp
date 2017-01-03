#include<iostream>
#include"Mediator.h"
#include"Colleague.h"

int main(int argc, char* argv[])
{
    Concrete_mediator* m = new Concrete_mediator();
    Concrete_colleague_a* c1 = new Concrete_colleague_a(m);
    Concrete_colleague_b* c2 = new Concrete_colleague_b(m);
    m->introduce_colleagues(c1, c2);
    c1->set_state("old");
    c2->set_state("old");
    c1->action();
    c2->action();
    std::cout << "\n";
    c1->set_state("new");
    c1->action();
    c2->action();
    std::cout << "\n";
    c2->set_state("old");
    c2->action();
    c1->action();

    return 0;
}
