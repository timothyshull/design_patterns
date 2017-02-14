#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public:
    Component();

    virtual ~Component();

public:
    virtual void operation() = 0;

    virtual void add(const Component&);

    virtual void remove(const Component&);

    virtual Component* get_child(int);
};

#endif //COMPONENT_H
