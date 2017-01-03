#ifndef DESIGN_PATTERNS_ABSTRACTION_H
#define DESIGN_PATTERNS_ABSTRACTION_H

class Abstraction_impl;

class Abstraction {
public:
    virtual ~Abstraction();

    virtual void operation() = 0;

protected:
    Abstraction();

private:
};

class Refined_abstraction : public Abstraction {
public:
    Refined_abstraction(Abstraction_impl* imp);

    ~Refined_abstraction();

    void operation();

protected:

private:
    Abstraction_impl* _imp;
};

#endif //DESIGN_PATTERNS_ABSTRACTION_H
