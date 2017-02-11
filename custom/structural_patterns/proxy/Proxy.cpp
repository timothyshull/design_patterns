#include <iostream>
#include "Proxy.h"

Subject::Subject() {}

Subject::~Subject() {}

Concrete_subject::Concrete_subject() {}

Concrete_subject::~Concrete_subject() {}

void Concrete_subject::request()
{
    std::cout << "Concrete_subject::request()\n";
}

Proxy::Proxy() {}

Proxy::Proxy(Subject* sub)
{
    _sub = sub;
}

Proxy::~Proxy()
{
    delete _sub;
}

void Proxy::request()
{
    std::cout << "proxy::request()\n";
    _sub->request();
}
