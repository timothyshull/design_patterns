#ifndef DESIGN_PATTERNS_HANDLE_H
#define DESIGN_PATTERNS_HANDLE_H

class Handle {
public:
    virtual ~Handle();

    virtual void handle_request() = 0;

    void set_successor(Handle* succ);

    Handle* get_successor();

protected:
    Handle();

    Handle(Handle* succ);

private:
    Handle* _succ;
};

class Concrete_handle_a : public Handle {
public:
    Concrete_handle_a();

    ~Concrete_handle_a();

    Concrete_handle_a(Handle* succ);

    void handle_request();
};

class Concrete_handle_b : public Handle {
public:
    Concrete_handle_b();

    ~Concrete_handle_b();

    Concrete_handle_b(Handle* succ);

    void handle_request();
};

#endif //DESIGN_PATTERNS_HANDLE_H
