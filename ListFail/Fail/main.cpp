/* Создать шаблонный класс односвязного списка (List). Для класса List
реализовать следующие методы:
• конструктор по умолчанию;
• конструктор копирования;
• конструктор перемещения;
• деструктор;
• добавление элемента в конец списка;
• добавление элемента в указанную позицию;
• удаление элемента с начала списка;
• удаление элемента из указанной позиции;
• вывод на экран содержимого списка;
• перегрузить оператор присваивания(&);
• перегрузить оператор присваивания(&&). */

/* Я так сильно запутался в этих списках. Что чем больше пытаюсь что-то сделать, тем сам запутываюсь еще больше.
Отправляю вам вот так. Остальные 5 моих попыток воссоздать все это, я лучше показывать не буду.
 Сам я (надеюсь пока) не могу никак справится с этой задачей. Принцип работы в принципе понятен, но слишком много нюансов.
 Лучше займусь другой домашкой которая уже и так успела накопится выше крыши, чем топить себя в этом болоте из списков.
 Пожалуйста извините!
 */
#include <iostream>
#include "List.h"

using namespace std;

int main()
{

    List<int> list{1,2,3,4,5};
   /* list.push_back(3);
    list.push_back(5);
    list.push_back(7);
    list.push_back(2);*/
    list.print();
    list.pop_front();

    list.print();
    list.erase(2);
    list.print();
//    list.insert(22,1);
//    list.print();
    /* Stack<int> stk(15);
     for (int i = 0; i < 25; ++i)
     {
         if (stk.isFull())
             break;
         stk.push(i + 1);
     }
     while (!stk.isEmpty())
     {
         cout<<stk.pop()<<" ";
     }*/
    /*Queue<int> queue(50);
    for (int i = 0; i < 25; ++i)
    {
        if (queue.isFull())
            break;
        queue.push(i + 1);
    }
    while (!queue.isEmpty())
    {
        cout << queue.pop() << " ";
    }*/
}