#ifndef DESIGN_PATTERNS_ITERATOR_H
#define DESIGN_PATTERNS_ITERATOR_H

class Aggregate;

typedef int Object;

class Iterator {
public:
    virtual ~Iterator();

    virtual void first() = 0;

    virtual void next() = 0;

    virtual bool is_done() = 0;

    virtual Object current_item() = 0;

protected:
    Iterator();
};

class Concrete_iterator : public Iterator {
public:
    Concrete_iterator(Aggregate* ag, int idx = 0);

    ~Concrete_iterator();

    void first();

    void next();

    bool is_done();

    Object current_item();

private:
    Aggregate* _ag;
    int _idx;
};

#endif //DESIGN_PATTERNS_ITERATOR_H
