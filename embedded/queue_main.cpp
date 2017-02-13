#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main(void)
{
    int j, k, h, t;
    /* test normal queue */
    Queue* myQ;
    myQ = Queue_Create();
    k = 1000;
    for (j = 0; j < QUEUE_SIZE; j++) {
        h = myQ->head;
        myQ->insert(myQ, k);
        printf("inserting %d at position %d, size =%d\n", k--, h, myQ->getSize(myQ));
    };
    printf("Inserted %d elements\n", myQ->getSize(myQ));
    for (j = 0; j < QUEUE_SIZE; j++) {
        t = myQ->tail;
        k = myQ->remove(myQ);
        printf("REMOVING %d at position %d, size =%d\n", k, t, myQ->getSize(myQ);
    };
    printf("Last item removed = %d\n", k);
    printf("Current queue size %d\n", myQ->getSize(myQ));
    puts("Queue test program");
    return EXIT_SUCCESS;
}