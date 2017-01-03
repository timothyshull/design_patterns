#include<iostream>
#include"Context.h"
#include"State.h"

int main(int argc, char* argv[])
{
    State* st = new Concrete_state_a();
    Context* con = new Context(st);
    con->operation_change_state();
    con->operation_change_state();
    con->operation_change_state();
    return 0;
}
