#ifndef SINGLETON_H
#define SINGLETON_H

#include "List.h"
#include "Name_singleton_pair.h"

class Singleton {
public:
    static void register_singleton(const char* name, Singleton* singleton);

    static Singleton* instance();

protected:
    static Singleton* lookup(const char* name);

private:
    static Singleton* _instance;
    static List<Name_singleton_pair>* _registry;
};

#endif // SINGLETON_H
