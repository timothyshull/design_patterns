#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "Command.h"

class Application;

class Open_command : public Command {
public:
    Open_command(Application*);

    virtual void execute();

protected:
    virtual const char* ask_user();

private:
    Application* _application;
    char* _response;
};

#endif // OPEN_COMMAND_H
