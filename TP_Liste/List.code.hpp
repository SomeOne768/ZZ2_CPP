#ifndef LIST_CODE_HPP_AZ
#define LIST_CODE_HPP_AZ

template <typename T>
List_T<T>::List_T() : begin(nullptr) {}

template <typename T>
List_T<T>::~List_T()
{
    Cell_T<T> *curr = begin;
    while (curr != nullptr)
    {
        Cell_T<T> *next = curr->getNext();
        delete curr;
        curr = next;
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
    if (begin == nullptr)
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
std::ostream& operator<<(std::ostream &os, const List_T<T> L ) 
{
    if(!L.empty())
    {
        os << "[";

        Cell_T<T> *parcourir = L.beginIt();
        while(parcourir != nullptr)
        {
            os << parcourir->getData() << " ";
        }
        
        os << "]";
    }

    return os;
}

#endif