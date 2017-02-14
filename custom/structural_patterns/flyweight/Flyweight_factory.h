#ifndef FLYWEIGHT_FACTORY_H
#define FLYWEIGHT_FACTORY_H

#include <string>
#include <vector>
#include "Flyweight.h"

class Flyweight_factory {
public:
    Flyweight_factory();

    ~Flyweight_factory();

    Flyweight* get_flyweight(const std::string& key);

private:
    std::vector<Flyweight*> _fly;
};

#endif //FLYWEIGHT_FACTORY_H
