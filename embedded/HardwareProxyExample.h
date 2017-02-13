#ifndef DESIGN_PATTERNS_HARDWAREPROXYEXAMPLE_H
#define DESIGN_PATTERNS_HARDWAREPROXYEXAMPLE_H

struct MotorController;
struct MotorData;
struct MotorDisplay;
struct MotorProxy;

typedef enum DirectionType {
    NO_DIRECTION,
    FORWARD,
    REVERSE
} DirectionType;

#endif // DESIGN_PATTERNS_HARDWAREPROXYEXAMPLE_H
