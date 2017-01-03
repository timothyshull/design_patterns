#include "Element.h"
#include "Visitor.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    Visitor* vis = new ConcreteVisitorA();
    Element* elm = new Concrete_element_a();
    elm->accept(vis);
    return 0;
}
