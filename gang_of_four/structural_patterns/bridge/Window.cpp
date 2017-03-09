#include "Window.h"
#include "WindowImp.h"
#include "WindowSystemFactory.h"

void Window::DrawRect(const Point& p1, const Point& p2)
{
    WindowImp* imp = GetWindowImp();
    imp->DeviceRect(p1.get_x(), p1.get_y(), p2.get_x(), p2.get_y());
}

WindowImp* Window::GetWindowImp()
{
    if (_imp == 0) {
        _imp = WindowSystemFactory::Instance()->MakeWindowImp();
    }
    return _imp;
}
