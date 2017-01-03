#ifndefsDESIGN_PATTERNS_SIMPLE_COMPOSITOR_H
#definesDESIGN_PATTERNS_SIMPLE_COMPOSITOR_H

#include "Compositor.h"

class Coord;

class SimpleCompositor : public Compositor {
public:
    SimpleCompositor();

    virtual int Compose(
        Coord natural[], Coord stretch[], Coord shrink[],
        int componentCount, int lineWidth, int breaks[]
    );
    // ...
};

#endif  // SIMPLE_COMPOSITOR_H