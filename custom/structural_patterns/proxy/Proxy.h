#ifndef DESIGN_PATTERNS_PROXY_H
#define DESIGN_PATTERNS_PROXY_H

class Subject {
public:
    virtual ~Subject();

    virtual void request() = 0;

protected:
    Subject();
};

class Concrete_subject : public Subject {
public:
    Concrete_subject();

    ~Concrete_subject();

    void request();
};

class Proxy {
public:
    Proxy();

    Proxy(Subject* sub);

    ~Proxy();

    void request();

private:
    Subject* _sub;
};

#endif //DESIGN_PATTERNS_PROXY_H
