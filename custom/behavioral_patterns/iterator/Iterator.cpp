#include <iostream>
#include "Iterator.h"
#include "Aggregate.h"

Iterator::Iterator() {}

Iterator::~Iterator() {}

Concrete_iterator::Concrete_iterator(Aggregate* ag, int idx)
{
    this->_ag = ag;
    this->_idx = idx;
}

Concrete_iterator::~Concrete_iterator() {}

Object Concrete_iterator::current_item()
{
    return _ag->get_item(_idx);
}

void Concrete_iterator::first()
{
    _idx = 0;
}

void Concrete_iterator::next()
{
    if (_idx < _ag->get_size()) {
        _idx++;
    }
}

bool Concrete_iterator::is_done()
{
    return _idx == _ag->get_size();
}
