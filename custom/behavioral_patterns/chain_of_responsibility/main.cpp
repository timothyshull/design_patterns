#include"Handle.h"

int main(int argc, char* argv[])
{
    Handle* h1 = new Concrete_handle_a();
    Handle* h2 = new Concrete_handle_b();
    h1->set_successor(h2);
    h1->handle_request();
    return 0;
}
