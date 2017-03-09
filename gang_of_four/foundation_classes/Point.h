#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "Coord.h"

using namespace std;

class Point {
public:
    static const Point zero;

    Point(Coord x = 0.0, Coord y = 0.0);

    Coord get_x() const;

    void set_x(Coord x);

    Coord get_y() const;

    void set_y(Coord y);

    friend Point operator+(const Point&, const Point&);

    friend Point operator-(const Point&, const Point&);

    friend Point operator*(const Point&, const Point&);

    friend Point operator/(const Point&, const Point&);

    Point& operator+=(const Point&);

    Point& operator-=(const Point&);

    Point& operator*=(const Point&);

    Point& operator/=(const Point&);

    Point operator-();

    friend bool operator==(const Point&, const Point&);

    friend bool operator!=(const Point&, const Point&);

    friend ostream& operator<<(ostream&, const Point&);

    friend istream& operator>>(istream&, Point&);

private:
    Coord _x;
    Coord _y;
};

#endif // POINT_H
