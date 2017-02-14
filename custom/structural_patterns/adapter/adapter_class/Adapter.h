#ifndef ADAPTER_CLASS_H
#define ADAPTER_CLASS_H

class Target {
public:
    Target();

    virtual ~Target();

    virtual void request();
};

class Adaptee {
public:
    Adaptee();

    ~Adaptee();

    void specific_request();
};

class Adapter : public Target, private Adaptee {
public:
    Adapter();

    ~Adapter();

    void request();
};

#endif //ADAPTER_CLASS_H
