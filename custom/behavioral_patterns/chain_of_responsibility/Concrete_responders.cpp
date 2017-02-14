#include <iostream>

#include "Concrete_responders.h"

Responder_a::Responder_a() {}

Responder_a::Responder_a(Base_responder& successor) : Base_responder{successor} {}

Responder_a::~Responder_a() {}

void Responder_a::handle_request(const std::string& request)
{
    if (this->get_successor() != nullptr) {
        std::cerr << "Responder_a get_successor() returned a valid successor ... forwarding request ...\n";
        this->get_successor()->handle_request(request);
    } else {
        std::cerr << "Responder_a get_successor() failed ... handling request \"" << request << "\".\n";
    }
}

Responder_b::Responder_b() {}

Responder_b::Responder_b(Base_responder& successor) : Base_responder{successor} {}

Responder_b::~Responder_b() {}

void Responder_b::handle_request(const std::string& request)
{
    if (this->get_successor() != nullptr) {
        std::cerr << "Responder_b get_successor() returned a valid successor ... forwarding request ...\n";
        this->get_successor()->handle_request(request);
    } else {
        std::cerr << "Responder_b get_successor() failed ... handling request \"" << request << "\".\n";
    }
}

Responder_c::Responder_c() {}

Responder_c::Responder_c(Base_responder& successor) : Base_responder{successor} {}

Responder_c::~Responder_c() {}

void Responder_c::handle_request(const std::string& request)
{
    if (this->get_successor() != nullptr) {
        std::cerr << "Responder_c get_successor() returned a valid successor ... forwarding request ...\n";
        this->get_successor()->handle_request(request);
    } else {
        std::cerr << "Responder_c get_successor() failed ... handling request \"" << request << "\".\n";
    }
}
