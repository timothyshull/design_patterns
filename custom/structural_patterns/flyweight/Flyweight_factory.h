#ifndef DESIGN_PATTERNS_FLYWEIGHT_FACTORY_H
#define DESIGN_PATTERNS_FLYWEIGHT_FACTORY_H

#include<string>
#include<vector>
#include"Flyweight.h"

class Flyweight_factory {
public:
    Flyweight_factory();

    ~Flyweight_factory();

    Flyweight* get_flyweight(const std::string& key);

private:
    std::vector<Flyweight*> _fly;
};

#endif //DESIGN_PATTERNS_FLYWEIGHT_FACTORY_H
