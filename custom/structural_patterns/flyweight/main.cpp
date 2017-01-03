#include<iostream>
#include"Flyweight.h"
#include"Flyweight_factory.h"

int main(int argc, char* argv[])
{
    Flyweight_factory* fc = new Flyweight_factory();
    Flyweight* fw1 = fc->get_flyweight("hello");
    Flyweight* fw2 = fc->get_flyweight("world!");
    Flyweight* fw3 = fc->get_flyweight("hello");
    return 0;
}
