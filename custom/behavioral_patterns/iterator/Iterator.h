#ifndef ITERATOR_H
#define ITERATOR_H

#include <iterator>

#include "Container.h"

template<typename Item_type>
class Iterator;

template<typename Item_type>
class Iterator {
public:
    using value_type = Item_type;
    using iterator_type = Iterator<value_type>;
    using iterator_category = std::random_access_iterator_tag;
    using difference_type = typename std::iterator_traits<iterator_type>::difference_type;
    using pointer = typename std::iterator_traits<iterator_type>::pointer;
    using reference = typename std::iterator_traits<iterator_type>::reference;

private:
    pointer _ptr;
public:
    inline Iterator() noexcept: _ptr{nullptr} {}

    template<class _Up> inline Iterator(const Iterator<_Up>& __u, typename std::enable_if<std::is_convertible<_Up, iterator_type>::value>::type* = 0) noexcept: _ptr(__u.base()) {}

    inline reference operator*() const noexcept
    {
        return *_ptr;
    }

    inline pointer operator->() const noexcept
    {
        return static_cast<pointer>(std::addressof(*_ptr));
    }

    inline Iterator& operator++() noexcept
    {
        ++_ptr;
        return *this;
    }

    inline Iterator operator++(int) noexcept
    {
        Iterator tmp{*this};
        ++(*this);
        return tmp;
    }

    inline Iterator& operator--() noexcept
    {
        --_ptr;
        return *this;
    }

    inline Iterator operator--(int) noexcept
    {
        Iterator tmp{*this};
        --(*this);
        return tmp;
    }

    inline Iterator operator+(difference_type n) const noexcept
    {
        Iterator w{*this};
        w += n;
        return w;
    }

    inline Iterator& operator+=(difference_type n) noexcept
    {
        _ptr += n;
        return *this;
    }

    inline Iterator operator-(difference_type n) const noexcept { return *this + (-n); }

    inline Iterator& operator-=(difference_type n) noexcept
    {
        *this += -n;
        return *this;
    }

    inline reference operator[](difference_type n) const noexcept
    {
        return _ptr[n];
    }

    inline iterator_type base() const noexcept { return _ptr; }

private:
    inline Iterator(iterator_type x) noexcept : _ptr{x} {}

    template<typename Up>
    friend class Iterator;

    template<typename Iter_type1, class Iter_type2>
    friend
    bool
    operator==(const Iterator<Iter_type1>&, const Iterator<Iter_type2>&) noexcept;

    template<class _Iter1, class _Iter2>
    friend
    bool
    operator<(const Iterator<_Iter1>&, const Iterator<_Iter2>&) noexcept;

    template<class _Iter1, class _Iter2>
    friend
    bool
    operator!=(const Iterator<_Iter1>&, const Iterator<_Iter2>&) noexcept;

    template<class _Iter1, class _Iter2>
    friend
    bool
    operator>(const Iterator<_Iter1>&, const Iterator<_Iter2>&) noexcept;

    template<class _Iter1, class _Iter2>
    friend
    bool
    operator>=(const Iterator<_Iter1>&, const Iterator<_Iter2>&) noexcept;

    template<class _Iter1, class _Iter2>
    friend
    bool
    operator<=(const Iterator<_Iter1>&, const Iterator<_Iter2>&) noexcept;

    template<class _Iter1, class _Iter2>
    friend
    auto
    operator-(const Iterator<_Iter1>& __x, const Iterator<_Iter2>& __y) noexcept
    -> decltype(__x.base() - __y.base());

    template<class _Iter1>
    friend
    Iterator<_Iter1>
    operator+(typename Iterator<_Iter1>::difference_type, Iterator<_Iter1>) noexcept;

    template<class _Ip, class _Op> friend _Op copy(_Ip, _Ip, _Op);

    template<class _B1, class _B2> friend _B2 copy_backward(_B1, _B1, _B2);

    template<class _Ip, class _Op> friend _Op move(_Ip, _Ip, _Op);

    template<class _B1, class _B2> friend _B2 move_backward(_B1, _B1, _B2);

    template<class _Tp>
    friend
    typename std::enable_if<std::is_trivially_copy_assignable<_Tp>::value, _Tp*>::type __unwrap_iter(Iterator<_Tp*>);
};

template<class _Iter1, class _Iter2>
inline inline
bool
operator==(const Iterator<_Iter1>& __x, const Iterator<_Iter2>& __y) noexcept
{
    return __x.base() == __y.base();
}

template<class _Iter1, class _Iter2>
inline inline
bool
operator<(const Iterator<_Iter1>& __x, const Iterator<_Iter2>& __y) noexcept
{
    return __x.base() < __y.base();
}

template<class _Iter1, class _Iter2>
inline inline
bool
operator!=(const Iterator<_Iter1>& __x, const Iterator<_Iter2>& __y) noexcept
{
    return !(__x == __y);
}

template<class _Iter1, class _Iter2>
inline inline
bool
operator>(const Iterator<_Iter1>& __x, const Iterator<_Iter2>& __y) noexcept
{
    return __y < __x;
}

template<class _Iter1, class _Iter2>
inline inline
bool
operator>=(const Iterator<_Iter1>& __x, const Iterator<_Iter2>& __y) noexcept
{
    return !(__x < __y);
}

template<class _Iter1, class _Iter2>
inline inline
bool
operator<=(const Iterator<_Iter1>& __x, const Iterator<_Iter2>& __y) noexcept
{
    return !(__y < __x);
}

template<class _Iter1>
inline inline
bool
operator!=(const Iterator<_Iter1>& __x, const Iterator<_Iter1>& __y) noexcept
{
    return !(__x == __y);
}

template<class _Iter1>
inline inline
bool
operator>(const Iterator<_Iter1>& __x, const Iterator<_Iter1>& __y) noexcept
{
    return __y < __x;
}

template<class _Iter1>
inline inline
bool
operator>=(const Iterator<_Iter1>& __x, const Iterator<_Iter1>& __y) noexcept
{
    return !(__x < __y);
}

template<class _Iter1>
inline inline
bool
operator<=(const Iterator<_Iter1>& __x, const Iterator<_Iter1>& __y) noexcept
{
    return !(__y < __x);
}

template<class _Iter1, class _Iter2>
inline inline
auto
operator-(const Iterator<_Iter1>& __x, const Iterator<_Iter2>& __y) noexcept
-> decltype(__x.base() - __y.base())
{
    return __x.base() - __y.base();
}

template<class _Iter1, class _Iter2>
inline inline
typename __wrap_iter<_Iter1>::difference_type
operator-(const __wrap_iter <_Iter1>& __x, const __wrap_iter <_Iter2>& __y) noexcept
{
    return __x.base() - __y.base();
}

template<class _Iter>
inline inline
Iterator<_Iter>
operator+(typename Iterator<_Iter>::difference_type __n,
          Iterator<_Iter> __x) noexcept
{
    __x += __n;
    return __x;
}




//class Aggregate;
//
//typedef int Object;
//
//class Iterator {
//public:
//    virtual ~Iterator();
//
//    virtual void first() = 0;
//
//    virtual void next() = 0;
//
//    virtual bool is_done() = 0;
//
//    virtual Object current_item() = 0;
//
//protected:
//    Iterator();
//};
//
//class Concrete_iterator : public Iterator {
//public:
//    Concrete_iterator(Aggregate* ag, int idx = 0);
//
//    ~Concrete_iterator();
//
//    void first();
//
//    void next();
//
//    bool is_done();
//
//    Object current_item();
//
//private:
//    Aggregate* _ag;
//    int _idx;
//};

#endif //ITERATOR_H
