#include <iostream>

#include "hello_world.h"
#include "component.h"
#include "object_pool.h"
#include "service_locator.h"
#include "singleton.h"
#include "double_buffer.h"
#include "subclass_sandbox.h"
#include "type_object.h"
#include "game_loop.h"
#include "spatial_partition.h"
#include "state.h"
#include "update_method.h"
#include "dirty_flag.h"
#include "flyweight.h"
#include "command.h"
#include "observer.h"
#include "prototype.h"
#include "data_locality.h"
#include "event_queue.h"
#include "bytecode.h"

int main(int argc, char* const argv[])
{
    UnbufferedSlapstick::testComedy();
    SpatialPartition::test();
    ObserverPattern::test();

    return 0;
}
