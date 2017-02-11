#include <iostream>
#include <string>
#include <cassert>
#include "Flyweight_factory.h"

Flyweight_factory::Flyweight_factory() {}

Flyweight_factory::~Flyweight_factory() {}

Flyweight* Flyweight_factory::get_flyweight(const std::string& key)
{
    std::vector<Flyweight*>::iterator it = _fly.begin();
    for (; it != _fly.end(); it++) {
        if ((*it)->get_intrinsic_state() == key) {
            std::cout << "already created by users...." << "\n";
            return *it;
        }
    }

    Flyweight* fn = new Concrete_flyweight(key);
    _fly.push_back(fn);
    return fn;
}
