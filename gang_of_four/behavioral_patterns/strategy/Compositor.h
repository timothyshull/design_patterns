#ifndefsDESIGN_PATTERNS_COMPOSITOR_H
#definesDESIGN_PATTERNS_COMPOSITOR_H

class Coord;

class Compositor {
public:
    virtual int Compose(
        Coord natural[], Coord stretch[], Coord shrink[],
        int componentCount, int lineWidth, int breaks[]
    ) = 0;
protected:
    Compositor();
};

#endif  // COMPOSITOR_H
