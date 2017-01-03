#ifndefsDESIGN_PATTERNS_NAME_SINGLETON_PAIR_H
#definesDESIGN_PATTERNS_NAME_SINGLETON_PAIR_H

class Singleton;

class NameSingletonPair {
public:
    NameSingletonPair(const char* name, Singleton* singleton);
    const char* GetName() const;
    Singleton* GetSingleton() const;
protected:
    const char* _name;
    Singleton* _singleton;
};

#endif /* NAME_SINGLETON_PAIR_H */
