#ifndefsDESIGN_PATTERNS_SHAPE_H
#definesDESIGN_PATTERNS_SHAPE_H

class Point;
class Manipulator;

class Shape {
public:
    Shape();
    virtual void BoundingBox(
        Point& bottomLeft, Point& topRight
    ) const;
    virtual Manipulator* CreateManipulator() const;
};

#endif /* SHAPE_H */
