#include<iostream>
#include"Prototype.h"

int main(int argc, char* argv[])
{
    Prototype* p = new Concrete_prototype();
    Prototype* p1 = p->clone();
    return 0;
}
