#ifndefsDESIGN_PATTERNS_APPLICATION_WINDOW_H
#definesDESIGN_PATTERNS_APPLICATION_WINDOW_H

#include "Window.h"

class ApplicationWindow : public Window {
public:
    // ...
    virtual void DrawContents();
};

#endif /* APPLICATION_WINDOW_H */
