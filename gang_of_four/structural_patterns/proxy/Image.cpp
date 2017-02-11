#include "Image.h"

Image::Image(std::string& file)
        : _filename{file}
{
    std::cout << "Constructing image from file " << file << "." << "\n";
}

//Image::~Image()
//{
//    delete _filename;
//}

void Image::draw(const Point& at)
{
    std::cout << "Drawing image at point " << at << "." << "\n";
}

void Image::handle_mouse(Event& event)
{
    std::cout << "Handling mouse event " << event << "\n";
}

const Point& Image::get_extent()
{
    return _extent;
}

void Image::load(istream& from)
{
    std::cout << "Loading image from input stream " << from.rdbuf() << "." << "\n";
}

void Image::save(ostream& to)
{
    std::cout << "Saving image to output stream " << to.rdbuf() << "." << "\n";
}

//Image::Image() : Graphic()
//{
//
//}
