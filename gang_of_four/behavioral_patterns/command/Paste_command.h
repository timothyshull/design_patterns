#ifndef PASTE_COMMAND_H
#define PASTE_COMMAND_H

#include "Command.h"

class Document;

class Paste_command : public Command {
public:
    Paste_command(Document*);

    virtual void execute();

private:
    Document* _document;
};

#endif // PASTE_COMMAND_H
