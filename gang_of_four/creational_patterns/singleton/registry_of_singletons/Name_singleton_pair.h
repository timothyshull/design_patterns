#ifndef NAME_SINGLETON_PAIR_H
#define NAME_SINGLETON_PAIR_H

class Singleton;

class Name_singleton_pair {
public:
    Name_singleton_pair(const char* name, Singleton* singleton);

    inline const char* get_name() const { return _name; };

    inline Singleton* get_singleton() const { return _singleton; };

protected:
    const char* _name;
    Singleton* _singleton;
};

#endif // NAME_SINGLETON_PAIR_H
