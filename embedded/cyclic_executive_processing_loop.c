#include <stdbool.h>

void main()
{
    /* global static and stack data */
    static int nTasks = 3;
    int currentTask;
    /* initialization code */
    currentTask = 0;
    if (POST()) {
        /* Power On Self Test succeeds */
        /* scheduling executive */
        while (true) {
            task1();
            task2();
            task3();
        }; /*end cyclic processing loop */
    }
    return 0;
}