#include <string>

#include "Image_proxy.h"

Image_proxy::Image_proxy(std::string& image_file)
        : _extent{Point::zero},
          _filename{image_file},
          _image{nullptr} {}

Image_proxy::Image_proxy(std::string&& image_file)
        : _extent{Point::zero},
          _filename{image_file},
          _image{nullptr} {}

Image_proxy::~Image_proxy() {}

Image* Image_proxy::get_image()
{
    if (_image == nullptr) {
        _image = new Image{_filename};
    }
    return _image;
}

const Point& Image_proxy::get_extent()
{
    if (_extent == Point::zero) {
        _extent = get_image()->get_extent();
    }
    return _extent;
}

void Image_proxy::draw(const Point& at)
{
    get_image()->draw(at);
}

void Image_proxy::handle_mouse(Event& event)
{
    get_image()->handle_mouse(event);
}

void Image_proxy::save(ostream& to)
{
    to << _extent << _filename;
}

void Image_proxy::load(istream& from)
{
    from >> _extent >> _filename;
}
