#ifndefsDESIGN_PATTERNS_VIEW_H
#definesDESIGN_PATTERNS_VIEW_H

class ApplicationWindow;

class View {
public:
    void DrawOn(const ApplicationWindow* w) const;
};

#endif /* VIEW */
