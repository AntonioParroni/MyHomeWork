/*1. Написать шаблон функции для поиска среднего арифметического значений
массива. */

#include <iostream>
 
template <typename T>
long double avg(const T * array, const size_t size)
{
    long double sum = 0;
    for (int i=0; i<size; i++)
        {
        sum += array[i];
        }
    return sum / size;
}


/*2. Написать перегруженные шаблоны функций для нахождения корней линейного
(a*x + b = 0) и квадратного (a*x2+b*x + c = 0) уравнений. Замечание: в функции
передаются коэффициенты уравнений. */

// сложно разобратся с обявлениями, но приблизительно понятно

template<typename T>
void f1(const T & a, const T & b, T & x, bool & res)
{
    if (a == 0)
    {
        res = false;
        return;
    }
    res = true;
    x = -b / a;
}
 
template<typename T>
void f2(const T & a, const T & b, const T & c, T & x1, T & x2, bool & res)
{
    const T D = b * b - 4 * a * c;
    if (D < 0)
    {
        res = false; 
        return;
    }
    res = true;
}