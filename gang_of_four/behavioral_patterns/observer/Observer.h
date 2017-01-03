#ifndefsDESIGN_PATTERNS_OBSERVER_H
#definesDESIGN_PATTERNS_OBSERVER_H

class Subject;

class Observer {
public:
    virtual ~Observer();
    virtual void Update(Subject* theChangedSubject) = 0;
protected:
    Observer();
};

#endif /* OBSERVER_H */
