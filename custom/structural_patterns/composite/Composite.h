#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <vector>
#include "Component.h"

class Composite : public Component {
public:
    Composite();

    ~Composite();

public:
    void operation();

    void add(Component* com);

    void remove(Component* com);

    Component* get_child(int index);

private:
    std::vector<Component*> _component_vector;
};

#endif //COMPOSITE_H
