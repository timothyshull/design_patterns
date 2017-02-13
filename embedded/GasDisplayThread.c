#include <printf.h>

void GasDisplayThread_run(void)
{
    printf("Measured Gas Flow %d\n", measuredGasFlow);
    printf("commandedGasFlow %d\n\n", commandedGasFlow);
}