#ifndef LIST_CODE_HPP_AZ
#define LIST_CODE_HPP_AZ

template <typename T>
List_T<T>::List_T() : begin(nullptr) {}

template <typename T>
List_T<T>::~List_T()
{
    while (begin != nullptr)
    {
        Cell_T<T> *temp = begin;
        begin = begin->getNext();
        delete temp;
    }
}

template <typename T>
bool List_T<T>::empty() const
{
    return begin == nullptr;
}

template <typename T>
void List_T<T>::push_back(Cell_T<T> *c)
{
    if (empty())
        begin = c;
    else
    {
        Cell_T<T> *curr = begin;
        while (curr->getNext() != nullptr)
        {
            curr = curr->getNext();
        }
        curr->addNext(c);
    }
}

template <typename T>
void List_T<T>::push_back(T t)
{
    push_back(new Cell_T<T>(t));
}

template <typename T>
void List_T<T>::display(std::ostream &os)
{
    if (!empty())
    {
        os << "[";

        Cell_T<T> *parcourir = beginIt();
        while (parcourir != nullptr)
        {
            os << parcourir->getData() << " ";
            parcourir = parcourir->getNext();
        }

        os << "]";
    }
}

template <typename T>
void List_T<T>::push_front(Cell_T<T> *c)
{
    c->addNext(begin);
    begin = c;
}

template <typename T>
void List_T<T>::push_front(T t)
{
    push_front(new Cell_T<T>(t));
}

template <typename T>
Cell_T<T> *List_T<T>::front()
{
    return begin;
}

template <typename T>
Cell_T<T> *List_T<T>::back()
{
    if (empty())
        return nullptr;

    Cell_T<T> *parcourir = begin;
    while (parcourir->getNext())
        parcourir = parcourir->getNext();

    return parcourir;
}

template <typename T>
Cell_T<T> *List_T<T>::pop_front()
{
    Cell_T<T> *out = begin;
    if (!empty())
        begin = begin->getNext();

    return out;
}

template <typename T>
Cell_T<T> *List_T<T>::pop_back()
{
    Cell_T<T> *out = begin;
    if (!empty())
    {
        Cell_T<T> *parcourir = begin->getNext();
        while (parcourir->getNext())
        {
            out = parcourir;
            parcourir = parcourir->getNext();
        }
        out->addNext(nullptr);
        out = parcourir;
    }

    return out;
}

template <typename T>
int List_T<T>::size()
{
    int compteur = 0;
    Cell_T<T> *parcourir = begin;
    while(parcourir)
    {
        compteur++;
        parcourir = parcourir->getNext();
    }

    return compteur;
}
#endif