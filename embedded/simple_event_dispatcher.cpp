
void dispatch_events(state)
{
    switch (activeState) {
        /* for each state */
        case state1:
            /* for each event */
            switch (eventID) {
                case event1:
                    /* check each guard */
                    if (guard1()) {
                        action1();
                    } else if (guard2()) {
                        action2();
                    };
                    break;
                case event2:
                    if (guard3()) {
                        action3();
                    } else if (guard4()) {
                        action5();
                    };
                    break;
            };
            break;
        case state2:
            // etc
            break;
    }
}
