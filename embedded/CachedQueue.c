#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CachedQueue.h"

void CachedQueue_Init(
        CachedQueue* const me,
        char* fName,
        int (* isFullfunction)(CachedQueue* const me),
        int (* isEmptyfunction)(CachedQueue* const me),
        int (* getSizefunction)(CachedQueue* const me),
        void (* insertfunction)(CachedQueue* const me, int k),
        int (* removefunction)(CachedQueue* const me),
        void (* flushfunction)(CachedQueue* const me),
        void (* loadfunction)(CachedQueue* const me))
{
    /* initialize base class */
    me->queue = Queue_Create();
    /* queue member must use its original functions */
    /* initialize subclass attributes */ me->numberElementsOnDisk = 0;
    strcpy(me->filename, fName);
    /* initialize aggregates */
    me->outputQueue = Queue_Create();
    /* initialize subclass virtual operations ptrs */
    me->isFull = isFullfunction;
    me->isEmpty = isEmptyfunction;
    me->getSize = getSizefunction;
    me->insert = insertfunction;
    me->remove = removefunction;
    me->flush = flushfunction;
    me->load = loadfunction;
}

/* operation Cleanup() */
void CachedQueue_Cleanup(CachedQueue* const me)
{
    Queue_Cleanup(me->queue);
}

/* operation isFull() */
int CachedQueue_isFull(CachedQueue* const me)
{
    return me->queue->isFull(me->queue) && me->outputQueue->isFull(me->outputQueue);
}

/* operation isEmpty() */
int CachedQueue_isEmpty(CachedQueue* const me)
{
    return me->queue->isEmpty(me->queue) && me->outputQueue->isEmpty(me->outputQueue) && (me->numberElementsOnDisk == 0);
}

/* operation getSize() */
int CachedQueue_getSize(CachedQueue* const me)
{
    return me->queue->getSize(me->queue) + me->outputQueue->getSize(me->outputQueue) + me->numberElementsOnDisk;
}
/* operation insert(int) */
// Insert Algorithm:
// if the queue is full,
// call flush to write out the queue to disk and reset the queue
// end if
// insert the data into the queue
void CachedQueue_insert(CachedQueue* const me, int k)
{
    if (me->queue->isFull(me->queue)) { me->flush(me); }
    me->queue->insert(me->queue, k);
}
/* operation remove */
// remove algorithm
// if there is data in the outputQueue,
//     remove it from the outputQueue
// else if there is data on the disk
//     call load to bring it into the outputQueue
//     remove it from the outputQueue
// else if there is data in the queue
//     remove it from there
//     (if there is no data to remove then return sentinel value)
int CachedQueue_remove(CachedQueue* const me)
{
    if (!me->outputQueue->isEmpty(me->outputQueue)) { return me->outputQueue->remove(me->outputQueue); }
    else if (me->numberElementsOnDisk > 0) {
        me->load(me);
        return me->queue->remove(me->queue);
    } else {
        return me->queue->remove(me->queue);
    }
}

/* operation flush */
// Precondition: this is called only when queue is full
//     and filename is valid
// flush algorithm
// if file is not open, then open file
// while not queue->isEmpty()
//     queue->remove()
//     write data to disk
//     numberElements on disk++
// end while
void CachedQueue_flush(CachedQueue* const me)
{
// write file I/O statements here . . .
}

/* operation load */
// Precondition: this is called only when outputQueue is empty
//   and filename is valid
// load algorithm
// while (!outputQueue->isFull() && (numberElementsOnDisk > 0 )
//     read from start of file (i.e., oldest datum)
//     numberElementsOnDisk--
//     outputQueue->insert()
// end while
void CachedQueue_load(CachedQueue* const me)
{
// write file I/O statements here . . .
}

CachedQueue* CachedQueue_Create(void)
{
    CachedQueue* self = (CachedQueue*) malloc(sizeof(CachedQueue));
    if (self != NULL) {
        CachedQueue_Init(
                self,
                "C:\\queuebuffer.dat",
                CachedQueue_isFull,
                CachedQueue_isEmpty,
                CachedQueue_getSize,
                CachedQueue_insert,
                CachedQueue_remove,
                CachedQueue_flush,
                CachedQueue_load
        );
    }
    return self;
}

void CachedQueue_Destroy(CachedQueue* const me)
{
    if (me != NULL) {
        CachedQueue_Cleanup(me);
    }
    free(me);
}