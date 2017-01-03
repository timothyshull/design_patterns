#include "MySingleton.h"

static MySingleton theSingleton;

MySingleton::MySingleton() {

    std::cout << "MySingleton::MySingleton()" << "\n";

    Singleton::Register("MySingleton", this);
}
