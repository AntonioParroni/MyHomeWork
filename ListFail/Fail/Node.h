#pragma once
template <class T>
class Node
{
    T data;
    Node<T>*next = nullptr;
public:
    Node(T val);
    void setData(T val);
    void setNext(Node<T>* pt);
    T getData()const;
    T getDataAndPointer () const;
    Node<T>* getNext()const;
};

template<class T>
Node<T>::Node(T val)
{
    data = val;
}

template<class T>
void Node<T>::setData(T val)
{
    data = val;
}
template<class T>
void Node<T>::setNext(Node<T> *pt)
{
    next = pt;
}
template<class T>
T Node<T>::getData() const
{
    return data;
}
template<class T>
Node<T> *Node<T>::getNext() const
{
    return next;
}

template<class T>
T Node<T>::getDataAndPointer() const
    {
        Node<T> temp;
        temp.data = data;
        temp.next = next;
        return temp;
    }




