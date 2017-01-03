#ifndef DESIGN_PATTERNS_COMPONENT_H
#define DESIGN_PATTERNS_COMPONENT_H

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

#endif //DESIGN_PATTERNS_COMPONENT_H
