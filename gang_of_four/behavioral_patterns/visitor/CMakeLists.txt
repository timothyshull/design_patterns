set(VISITOR_SRCS
        Chassis.cpp
        Chassis.h
        Equipment.cpp
        Equipment.h
        Equipment_visitor.cpp
        Equipment_visitor.h
        Floppy_disk.cpp
        Floppy_disk.h
        Inventory_visitor.cpp
        Inventory_visitor.h
        Pricing_visitor.cpp
        Pricing_visitor.h
        RE_matching_visitor.cpp
        RE_matching_visitor.h)

add_executable(visitor ${VISITOR_SRCS})