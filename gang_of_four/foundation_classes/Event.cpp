#include "Event.h"

std::string Event::to_string() const
{
    return std::string{};
}

std::ostream& operator<<(std::ostream& os, const Event& event)
{
    return os << event.to_string();
}