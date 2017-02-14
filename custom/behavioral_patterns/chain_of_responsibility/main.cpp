#include <string>
#include "Base_responder.h"
#include "Concrete_responders.h"

int main(int argc, char* argv[])
{
    Responder_a ra;
    Responder_b rb;
    Responder_c rc;

    ra.set_successor(rb);
    rb.set_successor(rc);

    std::string req{"Handle this request!"};
    ra.handle_request(req);

    return 0;
}
