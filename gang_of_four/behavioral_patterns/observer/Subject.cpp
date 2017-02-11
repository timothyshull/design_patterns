#include "Subject.h"
#include "Observer.h"

void Subject::attach(Observer* o)
{
    _observers->Append(o);
}

void Subject::detach(Observer* o)
{
    _observers->Remove(o);
}

void Subject::notify()
{
    ListIterator<Observer*> i(_observers);

    for (i.First(); !i.IsDone(); i.Next()) {
        i.CurrentItem()->update(this);
    }
}
