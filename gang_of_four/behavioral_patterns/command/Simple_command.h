#ifndef SIMPLE_COMMAND_H
#define SIMPLE_COMMAND_H

template<typename Receiver>
class Simple_command : public Command {
public:
    using Action = void(Receiver::*)();

    Simple_command(Receiver* r, Action a) : _action(a), _receiver(r) {}

    inline virtual void execute() { if (_receiver != nullptr) { (_receiver->*_action)(); }};

private:
    Action _action;
    Receiver* _receiver;
};

#endif // SIMPLE_COMMAND_H
