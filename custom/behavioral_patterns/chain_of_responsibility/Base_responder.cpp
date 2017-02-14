#include <iostream>
#include "Base_responder.h"

Base_responder::Base_responder() : _successor{nullptr} {}

Base_responder::~Base_responder()
{
    // if (_successor != nullptr) { delete _successor; }
}

Base_responder::Base_responder(Base_responder& successor) : _successor{&successor} {}

void Base_responder::handle_request(const std::string& request) {}


