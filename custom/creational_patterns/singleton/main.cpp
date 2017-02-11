#include <iostream>
#include "Singleton.h"

int main(int argc, char* argv[])
{
    Singleton* sgn = Singleton::instance();
    return 0;
}
