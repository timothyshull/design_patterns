#include "Custom_singleton.h"

static Custom_singleton custom_singleton;

Custom_singleton::Custom_singleton()
{
    std::cout << "Custom_singleton::Custom_singleton()" << "\n";
    Singleton::register_singleton("Custom_singleton", this);
}
