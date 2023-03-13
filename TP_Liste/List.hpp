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
    Cell_T<T>* beginIt()
    {
        return this->begin;
    }

    void push_back(Cell_T<T> *);
    // Surcharger l'opérateur operator<<().
    std::ostream &operator<<(std::ostream &, const List_T<T>) ;

    void display(std::ostream);

    // Écrire une méthode push_front() qui permet d'insérer un élément en tête de liste.
    // Écrire les méthodes front() et back() qui renvoient respectivement le premier et le dernier élément de la liste.
    // Écrire les méthodes pop_front() et pop_back() qui enlèvent respectivement l'élément en tête et en fin de liste
    // Écrire la méthode size() qui permet de connaître le nombre d'éléments de la liste
    // Si vous pensez que vous avez fini, vous pouvez passze à la section suivante, sinon vous prendrez un peu de temps pour compléter l'interface de la liste et lui offrir une vraie forme normale de Coplien avec un constructeur de copie et un opérateur d'affectation.
};

#include "List.code.hpp"

#endif
