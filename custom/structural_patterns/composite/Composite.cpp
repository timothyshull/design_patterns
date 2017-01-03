#include<algorithm>
#include"Composite.h"
#include"Component.h"

Composite::Composite() {}

Composite::~Composite() {}

void Composite::operation()
{
    std::vector<Component*>::iterator component_iterator = _component_vector.begin();

    for (; component_iterator != _component_vector.end(); component_iterator++) {
        (*component_iterator)->operation();
    }
}

void Composite::add(Component* com)
{
    _component_vector.push_back(com);
}

void Composite::remove(Component* com)
{
    std::vector<Component*>::iterator component_iterator = find(_component_vector.begin(), _component_vector.end(), com);
    if (component_iterator != _component_vector.end()) {
        _component_vector.erase(component_iterator);
    }
}

Component* Composite::get_child(int index)
{
    return _component_vector[index];
}
