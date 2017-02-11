#ifndef LIST_ITERATOR_H
#define LIST_ITERATOR_H

#include "Iterator.h"
#include "List.h"

template<typename Item>
class ListIterator : public Iterator<Item> {
public:
    ListIterator(const List<Item>* aList);

    virtual void First();

    virtual void Next();

    virtual bool IsDone() const;

    virtual Item CurrentItem() const;

private:
    const List<Item>* _list;
    long _current;
};

template<class Item>
ListIterator<Item>::ListIterator(const List<Item>* aList) : _list(aList), _current(0) {}

template<class Item>
void ListIterator<Item>::First()
{
    _current = 0;
}

template<class Item>
void ListIterator<Item>::Next()
{
    _current++;
}

template<class Item>
bool ListIterator<Item>::IsDone() const
{
    return _current >= _list->Count();
}

template<class Item>
Item ListIterator<Item>::CurrentItem() const
{
    if (IsDone()) {
        std::cerr << "ListIterator<Item>::CurrentItem() throw IteratorOutOfBounds\n";
        //throw IteratorOutOfBounds; // TODO
    }
    return _list->Get(_current);
}

// #include "ListIterator.cpp"

#endif // LIST_ITERATOR_H
