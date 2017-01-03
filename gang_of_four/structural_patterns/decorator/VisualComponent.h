#ifndefsDESIGN_PATTERNS_VISUAL_COMPONENT_H
#definesDESIGN_PATTERNS_VISUAL_COMPONENT_H

class VisualComponent {
public:
    VisualComponent();

    virtual void Draw();
    virtual void Resize();
    // ...
};

#endif /* VISUAL_COMPONENT_H */
