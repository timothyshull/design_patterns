#ifndef IMAGE_PROXY_H
#define IMAGE_PROXY_H

#include "Event.h"
#include "Graphic.h"
#include "Image.h"
#include "Point.h"

class Image_proxy : public Graphic {
public:
    Image_proxy(std::string& image_file);

    Image_proxy(std::string&& image_file);

    virtual ~Image_proxy();

    virtual void draw(const Point& at);

    virtual void handle_mouse(Event& event);

    virtual const Point& get_extent();

    virtual void load(istream& from);

    virtual void save(ostream& to);

protected:
    Image* get_image();

private:
    Image* _image;
    Point _extent;
    std::string _filename;
};

#endif // IMAGE_PROXY_H
