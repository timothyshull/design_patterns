#include <iostream>
#include "Proxy.h"

int main(int argc, char* argv[])
{
    Subject* sub = new Concrete_subject();
    Proxy* p = new Proxy(sub);
    p->request();
    return 0;
}
