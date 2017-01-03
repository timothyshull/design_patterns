#ifndefsDESIGN_PATTERNS_ICONWINDOW_H
#definesDESIGN_PATTERNS_ICONWINDOW_H

#include "Window.h"

class IconWindow : public Window {
public:
    // ...
    virtual void DrawContents();
private:
    const char* _bitmapName;
};

#endif /* ICONWINDOW_H */
