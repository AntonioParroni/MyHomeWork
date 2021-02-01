/*4. Написать функцию, которая выводит на экран ряд чисел Фибоначчи до n. Число
n принимается в качестве аргумента */

#include <iostream>
using namespace std;
 
int f(int num)  {
    if (num > 0) 
    {
        f(num - 1);
        cout << (num <= 2 ? 1 : f(-(num - 1)) + f(-(num - 2))) << endl;
    } 
        else 
        {
            num *= -1;
        }
return num <= 2 ? 1 : f(-(num - 1)) + f(-(num - 2));
}