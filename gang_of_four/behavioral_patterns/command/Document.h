#ifndef DESIGN_PATTERNS_DOCUMENT_H
#define DESIGN_PATTERNS_DOCUMENT_H

class Document {
public:
    Document(const char* name);

    void open();

    void paste();
};

#endif//DESIGN_PATTERNS_DOCUMENT_H
