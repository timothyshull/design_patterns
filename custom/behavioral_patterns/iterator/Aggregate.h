#ifndef AGGREGATE_H
#define AGGREGATE_H

class Iterator;

typedef int Object;

class Aggregate {
public:
    virtual ~Aggregate();

    virtual Iterator* create_iterator() = 0;

    virtual Object get_item(int idx) = 0;

    virtual int get_size() = 0;

protected:
    Aggregate();
};

class Concrete_aggregate : public Aggregate {
public:
    enum {
        SIZE = 3
    };

    Concrete_aggregate();

    ~Concrete_aggregate();

    Iterator* create_iterator();

    Object get_item(int idx);

    int get_size();

private:
    Object _objs[SIZE];
};

#endif //AGGREGATE_H
