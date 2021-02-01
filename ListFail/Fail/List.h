/* Создать шаблонный класс односвязного списка (List). Для класса List
реализовать следующие методы:

• добавление элемента в указанную позицию;
• удаление элемента из указанной позиции;

• перегрузить оператор присваивания(&);
• перегрузить оператор присваивания(&&). */


#pragma once
#include "Node.h"
#include <iostream>
#include <initializer_list>
using namespace std;
template <class T>
class List
{
    Node<T>*head = nullptr;
    Node<T>*tail = nullptr;
    int size = 0;

public:
    List();                             // • конструктор по умолчанию
    List(const initializer_list<T>&l ); // • инициализация со списком
    List(const List<T>&obj);            // • конструктор копирования
    List(List<T>&&obj)noexcept ;        // • конструктор перемещения
    ~List();                            // • деструктор
    void push_back(T val);              // • добавление элемента в конец списка
    void pop_front();                   // • удаление элемента с начала списка
    void print()const;                  // • вывод на экран содержимого списка
    void insert (T val, int pos);       // • добавление элемента в указанную позицию **
    void erase (int pos);               // • удаление элемента из указанной позиции **
};
template<class T>
List<T>::List(const initializer_list<T> &l) // инициализация со списком
{
    /*for(auto i = l.begin(); i!= l.end();i++)
        push_back(*i);*/
    for(T item : l)
        push_back(item);

}
template<class T>
List<T>::List(const List<T> &obj)       // • конструктор копирования
{
    Node<T>*cur = obj.head;
    while (cur)
    {
        push_back(cur->getData());
        cur = cur->getNext();
    }
}

template<class T>
List<T>::List(List<T> &&obj) noexcept       // • конструктор перемещения
{
    head = obj.head;
    tail = obj.tail;
    size = obj.size;

    obj.head = nullptr;
    obj.tail = nullptr;
    obj.size = 0;
}

template<class T>
List<T>::~List()               // • конструктор по умолчанию
{
    while (size)
        pop_front();
}

template<class T>
List<T>::List()=default;

template<class T>
void List<T>::push_back(T val) // • добавление элемента в конец списка
{
    Node<T>* tmp = new Node<T>(val);
    if(size==0)
        head = tail = tmp;
    else
    {
        tail->setNext(tmp);
        tail = tmp;
    }
    size++;
}

template<class T>
void List<T>::print() const         // • вывод на экран содержимого списка
{
    Node<T>* cur = head;
    while (cur)
    {
        cout<<cur->getData()<<" ";
        cur = cur->getNext();
    }
    cout<<endl;
}

template<class T>
void List<T>::pop_front()           // • удаление элемента с начала списка
{
    if(size==0)
        return;
    if(size==1)
    {
        delete head;
        head = tail = nullptr;
        size=0;
        return;
    }
    Node<T>* tmp = head;
    head = head->getNext();
    delete tmp;
    size--;
}

template<class T>
void List<T>::insert(T val, int pos)    // • добавление элемента в указанную позицию
    {
        Node<T>* tmp = new Node<T>(val);
        if(size==0)
            head = tail = tmp;
        else
            {
                tail->setNext(tmp);
                tail = tmp;
            }

        size++;
    }

template<class T>
void List<T>::erase(int x)        // • удаление элемента из указанной позиции
    {
//    if (size == 0)
//        {
//            return;
//        }
//        else if (pos <= size)
//            {
//                auto tempNext = tail->getDataAndPointer();
//            for (int i = 0; i < pos; i++)
//                {
//                tempNext = tempNext->getDataAndPointer();
//                }
//            }

        //Если удаляем первый элемент, то могут быть такие варианты
        //В списке есть только первый, в списке есть несколько элементов
        //Поэтому разбиваем логику выполнения
//        if ((x == 1) and (head->getNext())){                     //Если удаляем первый, но есть и другие, то
//                List *temp = head;	                        //Указываем, что нам нужно начало списка
//                head = head->getNext();	                            //Сдвигаем начало на следующий за началом элемент
//                head->Prev = NULL;	                            //Делаем так, чтоб предыдущий началу элемент был пустым
//                delete temp;		                            //Удаляем удаляемое начало
//                size--;		                                //Обязательно уменьшаем счетчик
//                return ;		                                //И выходим из функции
//            } else if ((x == 1) and (head == tail)){            //Если удаляем первый, но в списке только 1 элемент
//
//                head->getNext() = NULL;	                            //обнуляем все что нужно
//                head = NULL;
//                delete head;		                            //Удаляем указатель на начало
//                size = 0;		                                //Обязательно обозначаем, что в списке ноль элементов
//                return;			                                //и выходим из функции
//            }
//
//        //Также может быть, что удаляемый элемент является последним элементом списка
//        if (x==size){
//                List *temp = tail;	                            //Указываем, что нам нужен хвост
//                tail = tail->Prev;	                                //Отодвигаем хвост немного назад
//                tail->getNext() = NULL;	                                //Обозначаем, что впереди за хвостом пусто
//                delete temp;	                                    //Очищаем память от бывшего хвоста
//                size--;		                                    //Обязательно уменьшаем счетчик элементов
//                return;		                                    //И выходим из функции
//            }
//
//        //Если же удаляемый элемент лежит где-то в середине списка, то тогда его можно удалить
//
//        List *temp = head, *temp2;                        //temp-Удаляемый элемент, temp2 нужен, чтобы не потерять данные
//
//        //cout<<count_<<"\n";
//        for (int i=0; i<x-1; i++) temp = temp->Next;  //Идем к адресу удаляемого элемента
//
//        temp2 = temp;	                                //Временно запоминаем адрес удаляемого элемента
//        temp2->Prev->next =   temp->next;	            //Записываем данные, что следующий за перед сейчас удаляемым элементом - это следующий от удаляемого
//        temp2->next->Prev = temp->Prev;               //а предыдущий для следующего - это предыдущий для удаляемого
//        delete temp;                               //теперь смело можно освободить память, удалив адрес на начало удаляемого элемента
//        size--;                                         //Обязательно уменьшаем число элементов в списке.
    }





