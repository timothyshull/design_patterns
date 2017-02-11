#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "Event.h"
#include "Point.h"

class Graphic {
public:
    virtual ~Graphic();

    virtual void draw(const Point& at) = 0;

    virtual void handle_mouse(Event& event) = 0;

    virtual const Point& get_extent() = 0;

    virtual void load(istream& from) = 0;

    virtual void save(ostream& to) = 0;

protected:
    Graphic();
};

#endif // GRAPHIC_H
