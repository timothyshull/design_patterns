#ifndef DESIGN_PATTERNS_FACADE_H
#define DESIGN_PATTERNS_FACADE_H

class Subsystem_1 {
public:
    Subsystem_1();

    ~Subsystem_1();

    void operation();
};

class Subsystem_2 {
public:
    Subsystem_2();

    ~Subsystem_2();

    void operation();
};

class Facade {
public:
    Facade();

    ~Facade();

    void operation_wrapper();

private:
    Subsystem_1* _subs1;
    Subsystem_2* _subs2;
};

#endif //DESIGN_PATTERNS_FACADE_H
