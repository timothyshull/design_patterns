#ifndefsDESIGN_PATTERNS_ITERATOR_OUT_OF_BOUNDS_H
#definesDESIGN_PATTERNS_ITERATOR_OUT_OF_BOUNDS_H

#include <stdexcept>
#include <string>

class IteratorOutOfBounds : public std::runtime_error {
public:
    IteratorOutOfBounds(const std::string& s)
        : std::runtime_error(s) {}
};

#endif /* ITERATOR_OUT_OF_BOUNDS_H */
