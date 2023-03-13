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
    void addNext(Cell_T *);
    void addPrev(Cell_T *);
    std::string toString() const;

    Cell_T *getNext() const;
    Cell_T *getPrev() const;

    const T getData() const;
};

#include "Cell.code.hpp"

template <typename T>
class List_T
{
    Cell_T<T> *begin;

public:
    List_T();
    ~List_T();
    bool empty() const;
    Cell_T<T> *beginIt()
    {
        return this->begin;
    }

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
    
    // copie + affectation {COPLIEN}
};

#include "List.code.hpp"

template <typename T>
std::ostream &operator<<(std::ostream &os, const List_T<T> L)
{
    L.display(os, L);
    return os;
}

#endif
