#include <iostream>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

int main(int argc, char* argv[])
{
    Leaf* l = new Leaf();
    l->operation();
    Composite* com = new Composite();
    com->add(l);
    com->operation();
    Component* ll = com->get_child(0);
    ll->operation();
    return 0;
}
