#include "TokenizerAsyncSinglePkg.h"

int TSREventQueue_post(Event e)
{
    Mutex_lock(me->itsMutex);
    if (!TSRQueue_isFull(me)) {
        me->q[me->head] = e;
        me->head = (me->head + 1) % QSIZE;
        me->size += 1;
        Mutex_release(me->itsMutex);
        postSignal(); /* signal that an event is present */ return 1;
    } else {
        Mutex_release(me->itsMutex);
        return 0;
    };
};

void TokenizerAsyncSingleReceptor_taskLoop()
{
    while (1) {
        waitOnSignal(); /* wait until event occurs */
        while (!TSREventQueue_isEmpty(me->itsTSREventQueue)) {
            TokenizerAsyncSingleReceptor_eventDispatch(TSREventQueue_pull(me->itsTSREventQueue));
        }
    }
}