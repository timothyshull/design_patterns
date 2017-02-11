#include <iostream>
#include "Iterator.h"
#include "Aggregate.h"

int main(int argc, char* argv[])
{
    Aggregate* ag = new Concrete_aggregate();
    Iterator* it = new Concrete_iterator(ag);
    for (; !(it->is_done()); it->next()) {
        std::cout << it->current_item() << "\n";
    }
    return 0;
}
