#ifndefsDESIGN_PATTERNS_WINDOW_H
#definesDESIGN_PATTERNS_WINDOW_H

class VisualComponent;

class Window {
public:
    void SetContents (VisualComponent* contents);
private:
    VisualComponent* _contents;
};

#endif /* WINDOW_H */
