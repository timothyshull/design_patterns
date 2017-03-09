#ifndef DESIGN_PATTERNS_CONTAINER_H
#define DESIGN_PATTERNS_CONTAINER_H

template<typename Item_type>
class Container {
public:
    Container(std::size_t size) : _collection{new Item_type[size]} {}

    ~Container() { if (_collection != nullptr) { delete[] _collection; }}

    inline Item_type operator[](std::size_t index) { if (index > 0 && index < _size) { return *(_collection + index); } else { throw std::out_of_range{}; }}

    const Item_type& operator[](std::size_t idx) const { if (index > 0 && index < _size) { return *(_collection + index); } else { throw std::out_of_range{}; }}

    inline bool empty() const noexcept { return _size == 0; }

    inline std::size_t size() const noexcept { return _size; }

    template<typename>
    friend class Iterator;

private:
    Item_type* _collection;
    std::size_t _size;
};

#endif // DESIGN_PATTERNS_CONTAINER_H
