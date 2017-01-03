#ifndef DESIGN_PATTERNS_COMMAND_H
#define DESIGN_PATTERNS_COMMAND_H

class Command {
public:
    virtual ~Command();

    virtual void execute() = 0;

protected:
    Command();
};

#endif//DESIGN_PATTERNS_COMMAND_H
