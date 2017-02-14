#ifndef HANDLE_H
#define HANDLE_H

class Base_responder {
public:
    virtual ~Base_responder();

    virtual void handle_request(const std::string& request) = 0;

    inline void set_successor(Base_responder& successor) noexcept { _successor = &successor; };

    inline Base_responder* get_successor() const noexcept { return _successor; };

protected:
    Base_responder();

    Base_responder(Base_responder& successor);

private:
    Base_responder* _successor;
};

#endif //HANDLE_H
