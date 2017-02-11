#ifndef OBSERVER_H
#define OBSERVER_H

class Subject;

class Observer {
public:
    virtual ~Observer();

    virtual void update(Subject* changed_subject) = 0;

protected:
    Observer();
};

#endif // OBSERVER_H
