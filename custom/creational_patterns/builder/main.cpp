#include<iostream>
#include"Builder.h"
#include"Product.h"
#include"Director.h"

int main(int argc, char* argv[])
{
    Director* d = new Director(new Concrete_builder());
    d->construct();
    return 0;
}
