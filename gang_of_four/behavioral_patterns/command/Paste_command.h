#ifndef DESIGN_PATTERNS_PASTE_COMMAND_H
#define DESIGN_PATTERNS_PASTE_COMMAND_H

#include"Command.h"

class Document;

class Paste_command : public Command {
public:
    Paste_command(Document*);

    virtual void execute();

private:
    Document* _document;
};

#endif//DESIGN_PATTERNS_PASTE_COMMAND_H
