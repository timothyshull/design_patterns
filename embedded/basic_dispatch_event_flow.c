void dispatch_event() {
    Mutex_lock(me->itsMutex);
    /* perform list of actions */
    /* update stateVariable */
    Mutex_release(me->itsMutex);
}

void post_flow() {
    Mutex_lock(me->itsMutex);
    insert(ev);
    /* insert into the queue */
    Mutex_release(me->itsMutex);
    AsynchronousStateMachine_dispatchEvent(ev);
}

void event_receptor_data_passing() {
    void event1(FSM* me);
    /* no arguments */
    void event2(FMS* me, int n, double torque);
    /* two scalar arguments */
    void event3(FSM* me, struct NavData* nd);
    /* pointer to struct */
}

