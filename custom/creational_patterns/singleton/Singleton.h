#ifndef DESIGN_PATTERNS_SINGLETON_H
#define DESIGN_PATTERNS_SINGLETON_H

#include<iostream>

class Singleton {
public:
    static Singleton* instance();

protected:
    Singleton();

private:
    static Singleton* _instance;
};

#endif //DESIGN_PATTERNS_SINGLETON_H
