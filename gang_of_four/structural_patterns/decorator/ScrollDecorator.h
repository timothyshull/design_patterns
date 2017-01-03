#ifndefsDESIGN_PATTERNS_SCROLL_DECORATOR_H
#definesDESIGN_PATTERNS_SCROLL_DECORATOR_H

#include "Decorator.h"

class ScrollDecorator : public Decorator {
public:
    ScrollDecorator(VisualComponent*);
};

#endif /* SCROLL_DECORATOR_H */
