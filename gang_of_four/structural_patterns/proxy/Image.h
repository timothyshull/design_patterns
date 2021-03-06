#ifndef IMAGE_H
#define IMAGE_H

#include "Event.h"
#include "Graphic.h"

class Image : virtual public Graphic {
public:
    Image(std::string& file);

    ~Image() = default;

    virtual void draw(const Point& at);

    virtual void handle_mouse(Event& event);

    virtual const Point& get_extent();

    virtual void load(istream& from);

    virtual void save(ostream& to);

protected:
    Image() = default;

private:
    Point _extent;
    std::string _filename;
};

#endif // IMAGE_H
