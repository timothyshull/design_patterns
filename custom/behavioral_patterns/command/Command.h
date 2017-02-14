#ifndef COMMAND_H
#define COMMAND_H

class Reciever;

class Command {
public:
    virtual ~Command() = default;

    virtual void execute() = 0;

protected:
    Command() = default;
};

#endif //COMMAND_H
