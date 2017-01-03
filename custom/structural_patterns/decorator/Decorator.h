#ifndef DESIGN_PATTERNS_DECORATOR_H
#define DESIGN_PATTERNS_DECORATOR_H

class Component {
public:
    virtual ~Component();

    virtual void operation();

protected:
    Component();
};

class Concrete_component : public Component {
public:
    Concrete_component();

    ~Concrete_component();

    void operation();
};

class Decorator : public Component {
public:
    Decorator(Component* com);

    virtual ~Decorator();

    void operation();

protected:
    Component* _com;
};

class Concrete_decorator : public Decorator {
public:
    Concrete_decorator(Component* com);

    ~Concrete_decorator();

    void operation();

    void added_behavior();
};

#endif //DESIGN_PATTERNS_DECORATOR_H
