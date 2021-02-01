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
