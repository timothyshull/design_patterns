#ifndef DESIGN_PATTERNS_LEAF_H
#define DESIGN_PATTERNS_LEAF_H

#include "Component.h"

class Leaf : public Component {
public:
    Leaf();

    ~Leaf();

    void operation();
};

#endif //DESIGN_PATTERNS_LEAF_H
