/* LOOPS_PER_MS is the # of loops in the delay() function required to hit 1 ms, so it is processor and compiler-dependent
*/
#define LOOPS_PER_MS 1000

void delay(unsigned int ms)
{
    long nLoops = ms * LOOPS_PER_MS;
    do {}
    while (nLoops–-);
}