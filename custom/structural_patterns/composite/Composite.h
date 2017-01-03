#ifndef DESIGN_PATTERNS_COMPOSITE_H
#define DESIGN_PATTERNS_COMPOSITE_H

#include<vector>
#include"Component.h"

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

#endif //DESIGN_PATTERNS_COMPOSITE_H
