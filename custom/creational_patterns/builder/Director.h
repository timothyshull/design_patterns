#ifndef DESIGN_PATTERNS_DIRECTOR_H
#define DESIGN_PATTERNS_DIRECTOR_H

class Builder;

class Director {
public:
    Director(Builder* bld);

    ~Director();

    void construct();

private:
    Builder* _bld;
};

#endif //DESIGN_PATTERNS_DIRECTOR_H
