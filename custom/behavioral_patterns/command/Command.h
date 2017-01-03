#ifndef DESIGN_PATTERNS_COMMAND_H
#define DESIGN_PATTERNS_COMMAND_H

class Reciever;

class Command {
public:
    virtual ~Command();

    virtual void execute() = 0;

protected:
    Command();
};

class Concrete_command : public Command {
public:
    Concrete_command(Reciever* rev);

    ~Concrete_command();

    void execute();

private:
    Reciever* _rev;
};

#endif //DESIGN_PATTERNS_COMMAND_H
