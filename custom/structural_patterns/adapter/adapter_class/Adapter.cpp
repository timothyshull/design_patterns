#include<iostream>
#include"Adapter.h"

Target::Target() {}

Target::~Target() {}

void Target::request()
{
    std::cout << "Target::request()\n";
}

Adaptee::Adaptee() {}

Adaptee::~Adaptee() {}

void Adaptee::specific_request()
{
    std::cout << "Adaptee::specific_request()\n";
}

Adapter::Adapter() {}

Adapter::~Adapter() {}

void Adapter::request()
{
    this->specific_request();
}
