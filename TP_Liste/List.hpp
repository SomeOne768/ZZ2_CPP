#ifndef LIST_HPP_AZ
#define LIST_HPP_AZ
#include <iostream>

template <typename T>
class Cell_T
{
    T data;
    Cell_T *next;
    Cell_T *previous;

public:
    Cell_T(T);
    Cell_T(const Cell_T &);
    void addNext(Cell_T *);
    void addPrev(Cell_T *);
    std::string toString() const;

    Cell_T *getNext() const;
    Cell_T *getPrev() const;

    const T getData() const;
};

#include "Cell.code.hpp"
template <typename T>
class List_T;

template <typename T>
class ItList
{
    Cell_T<T> *cell;

    ItList(Cell_T<T> *c) : cell(c)
    {
    }
    friend class List_T<T>;

public:
    ItList() : cell(nullptr)
    {
    }

    bool operator!=(const ItList<T> &it) const
    {
        return it.cell != cell;
    }

    void operator++()
    {
        cell = cell->getNext();
    }
    T operator*() const
    {
        return cell->getData();
    }

    bool equals(const ItList<T> &it) const
    {
        return !(*this != it);
    }
};

template <typename T>
class List_T
{
    Cell_T<T> *begin;

public:
    List_T();
    ~List_T();
    List_T(const List_T<T> &L);
    bool empty() const;
    void push_back(Cell_T<T> *);
    void push_back(T t);
    void display(std::ostream &);
    void push_front(Cell_T<T> *);
    void push_front(T);
    Cell_T<T> *front();
    Cell_T<T> *back();
    Cell_T<T> *pop_front();
    Cell_T<T> *pop_back();
    int size();
    List_T<T> &operator=(List_T<T> &);
    ItList<T> beginIt()
    {
        return ItList<T>{begin};
    }
    ItList<T> end()
    {
        return ItList<T>{};
    }
};

#include "List.code.hpp"

template <typename T>
std::ostream &operator<<(std::ostream &os, const List_T<T> L)
{
    L.display(os, L);
    return os;
}

#endif
