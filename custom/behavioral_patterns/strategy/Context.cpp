#include "Context.h"
#include "Strategy.h"
#include <iostream>

using namespace std;

Context::Context(Strategy* stg)
{
    _stg = stg;
}

Context::~Context()
{
    if (!_stg) {
        delete _stg;
    }
}

void Context::do_action()
{
    _stg->algorithm_interface();
}

