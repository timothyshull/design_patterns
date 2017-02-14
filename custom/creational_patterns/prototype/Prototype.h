#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype {
public:
    virtual ~Prototype();

    virtual Prototype* clone() const = 0;

protected:
    Prototype();
};

class Concrete_prototype : public Prototype {
public:
    Concrete_prototype();

    Concrete_prototype(const Concrete_prototype& cp);

    ~Concrete_prototype();

    Prototype* clone() const;
};

#endif //PROTOTYPE_H
