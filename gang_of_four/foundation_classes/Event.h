#ifndef EVENT_H
#define EVENT_H

#include <iosfwd>
#include <ostream>

class Event {
public:
    friend std::ostream& operator<<(std::ostream& os, const Event& event);

    std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const Event& event);

#endif // EVENT_H
