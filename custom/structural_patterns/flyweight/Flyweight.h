#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <string>

class Flyweight {
public:

    virtual ~Flyweight();

    virtual void operation(const std::string& extrinsic_state);

    std::string get_intrinsic_state();

protected:
    Flyweight(std::string intrinsicState);

private:
    std::string _intrinsic_state;
};

class Concrete_flyweight : public Flyweight {
public:
    Concrete_flyweight(std::string intrinsic_state);

    ~Concrete_flyweight();

    void operation(const std::string& extrinsic_state);
};

#endif //FLYWEIGHT_H
