/*
 * Make sure you set the environment variable SINGLETON before you run this
 * program.  Currently, the only option is "MySingleton".
 */

#include "Custom_singleton.h"

int main()
{
    Singleton* singleton1{Custom_singleton::instance()};
    Singleton::register_singleton("Custom_singleton", singleton1);
    Singleton* singleton{Singleton::instance()};

    return 0;
}
