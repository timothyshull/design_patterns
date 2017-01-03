#include<iostream>
#include"Subject.h"
#include"Observer.h"

int main(int argc, char* argv[])
{
    Concrete_subject* sub = new Concrete_subject();
    Observer* o1 = new Concrete_observer_a(sub);
    Observer* o2 = new Concrete_observer_b(sub);
    sub->set_state("old");
    sub->Notify();
    sub->set_state("new");
    sub->Notify();
    return 0;
}
