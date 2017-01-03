#ifndefsDESIGN_PATTERNS_SKIP_LIST_H
#definesDESIGN_PATTERNS_SKIP_LIST_H

#include "List.h"

template <class Item>
class SkipList : public List<Item> {
public:
    Iterator<Item>* CreateIterator() const;
};

#include "SkipList.cpp"

#endif /* SKIP_LIST_H */
