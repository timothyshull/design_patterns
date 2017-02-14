#ifndef CONCRETE_RESPONDERS_H
#define CONCRETE_RESPONDERS_H

#include "Base_responder.h"

class Responder_a : public Base_responder {
public:
    Responder_a();

    ~Responder_a();

    Responder_a(Base_responder& successor);

    void handle_request(const std::string& request);
};

class Responder_b : public Base_responder {
public:
    Responder_b();

    ~Responder_b();

    Responder_b(Base_responder& successor);

    void handle_request(const std::string& request);
};

class Responder_c : public Base_responder {
public:
    Responder_c();

    ~Responder_c();

    Responder_c(Base_responder& successor);

    void handle_request(const std::string& request);
};

#endif // CONCRETE_RESPONDERS_H
