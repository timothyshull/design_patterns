#include "Director.h"
#include "Builder.h"

Director::Director(Builder* bld)
{
    _bld = bld;
}

Director::~Director() {}

void Director::construct()
{
    _bld->build_part_a("user-defined");
    _bld->build_part_b("user-defined");
    _bld->build_part_c("user-defined");
}
