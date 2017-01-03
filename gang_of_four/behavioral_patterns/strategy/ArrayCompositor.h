#ifndefsDESIGN_PATTERNS_ARRAY_COMPOSITOR_H
#definesDESIGN_PATTERNS_ARRAY_COMPOSITOR_H

#include "Compositor.h"

class Coord;

class ArrayCompositor : public Compositor {
public:
    ArrayCompositor(int interval);

    virtual int Compose(
        Coord natural[], Coord stretch[], Coord shrink[],
        int componentCount, int lineWidth, int breaks[]
    );
    // ...
};

#endif  // ARRAY_COMPOSITOR_H
