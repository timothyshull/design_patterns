#include<iostream>
#include"Decorator.h"

int main(int argc, char* argv[])
{
    Component* com = new Concrete_component();
    Decorator* dec = new Concrete_decorator(com);
    dec->operation();
    return 0;
}
