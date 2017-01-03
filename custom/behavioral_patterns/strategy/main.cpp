#include<iostream>
#include"Context.h"
#include"Strategy.h"

int main(int argc, char* argv[])
{
    Strategy* ps = new Concrete_strategy_a();
    Context* pc = new Context(ps);
    pc->do_action();
    return 0;
}
