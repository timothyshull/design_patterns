#ifndef MOTORDATA_PATTERN_H
#define MOTORDATA_PATTERN_H

#define RETRIGGER (2)
#define WAIT_FOREVER (0)

extern int commandedPosition;

extern int measuredPosition;

int getCmdPos(void);

int getMeasPos(void);

void setCmdPos(int x);

void setMeasPos(int x);

#endif // MOTORDATA_PATTERN_H
