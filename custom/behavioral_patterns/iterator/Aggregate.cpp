#include <iostream>
#include "Aggregate.h"
#include "Iterator.h"

Aggregate::Aggregate() {}

Aggregate::~Aggregate() {}

Concrete_aggregate::Concrete_aggregate()
{
    for (int i = 0; i < SIZE; i++) {
        _objs[i] = i;
    }
}

Concrete_aggregate::~Concrete_aggregate() {}

Iterator* Concrete_aggregate::create_iterator()
{
    return new Concrete_iterator(this);
}

Object Concrete_aggregate::get_item(int idx)
{
    if (idx < this->get_size()) {
        return _objs[idx];
    } else {

        return -1;
    }
}

int Concrete_aggregate::get_size()
{
    return SIZE;
}
