#include"Singleton.h"
#include<iostream>

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton()
{
    std::cout << "singleton()\n";
}

Singleton* Singleton::instance()
{
    if (_instance == nullptr) {
        _instance = new Singleton();
    }
    return _instance;
}
