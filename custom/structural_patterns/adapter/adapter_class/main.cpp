#include <iostream>
#include "Adapter.h"

int main(int argc, char* argv[])
{
    Target* adt = new Adapter();
    adt->request();
    return 0;
}
