#ifndef ADAPTER_OBJECT_H
#define ADAPTER_OBJECT_H

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

class Adapter : public Target {
public:
    Adapter(Adaptee* ade);

    ~Adapter();

    void request();

private:
    Adaptee* _ade;
};

#endif //ADAPTER_OBJECT_H
