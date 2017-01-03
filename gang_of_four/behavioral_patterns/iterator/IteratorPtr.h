// TODO: Make it work using IteratorPtr.

#ifndefsDESIGN_PATTERNS_ITERATOR_PTR_H
#definesDESIGN_PATTERNS_ITERATOR_PTR_H

template <class Item>
class IteratorPtr {
public:
    IteratorPtr(Iterator<Item>* i): _i(i) { }
    ~IteratorPtr() { delete _i; }

    Iterator<Item>* operator->() { return _i; }
    Iterator<Item>& operator*() { return *_i; }
private:
    // disallow copy and assignment to avoid
    // multiple deletions of _i:

    IteratorPtr(const IteratorPtr&);
    IteratorPtr& operator=(const IteratorPtr&);
private:
    Iterator<Item>* _i;
};

#endif /* ITERATOR_PTR_H */
