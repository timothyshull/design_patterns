#ifndef DESIGN_PATTERNS_SIMPLE_COMMAND_H
#define DESIGN_PATTERNS_SIMPLE_COMMAND_H

template<typename Receiver>
class Simple_command : public Command {
public:
    typedef void(Receiver::* Action)();

    Simple_command(Receiver* r, Action a) : _action(a), _receiver(r) {}

    virtual void execute();

private:
    Action _action;
    Receiver* _receiver;
};

template<typename Receiver>
void Simple_command<Receiver>::execute()
{
    (_receiver->*_action)();
}

#endif//DESIGN_PATTERNS_SIMPLE_COMMAND_H
