#include <iostream>

#include "Singleton.h"

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton()
{
    std::cout << "Singleton::Singleton()" << "\n";
}

Singleton* Singleton::instance()
{
    if (_instance == nullptr) {
        _instance = new Singleton;
    }
    return _instance;
}
