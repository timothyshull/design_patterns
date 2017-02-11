#include "Singleton.h"

Singleton* Singleton::_instance = nullptr;

List<Name_singleton_pair>* Singleton::_registry = nullptr;

Singleton* Singleton::instance()
{
    std::cout << "Singleton::instance()" << "\n";

    if (_instance == 0) {
        const char* singleton_name = getenv("SINGLETON");
        // user or environment supplies this at startup
        _instance = lookup(singleton_name);
        // lookup returns 0 if there's no such singleton
    }
    return _instance;
}

void Singleton::register_singleton(const char* name, Singleton* singleton)
{
    std::cout << "singleton::register_singleton(const char*, singleton*)" << "\n";

    Name_singleton_pair pair(name, singleton);
    _registry->Append(pair);
}

Singleton* Singleton::lookup(const char* name)
{
    std::cout << "Singleton::lookup(const char*)" << "\n";

    Iterator<Name_singleton_pair>* i = _registry->CreateIterator();
    for (i->First(); !i->IsDone(); i->Next()) {
        Name_singleton_pair pair = i->CurrentItem();
        if (pair.get_name() == name) {
            return pair.get_singleton();
        }
    }
    return 0;
}
