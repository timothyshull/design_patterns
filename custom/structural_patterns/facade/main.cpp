#include <iostream>
#include "Facade.h"

int main(int argc, char* argv[])
{
    Facade* f = new Facade();
    f->operation_wrapper();
    return 0;
}
