/* 1. Написать функцию, которая возвращает произведение двух целых чисел,
полученных в качестве аргумента. */

# include <iostream>
using namespace std;

int multiplication (int a, int b)
{
    return a * b;
}

int main ()
{
    int a, b;
    cout << "Insert first number ", cin >> a;
    cout << "Insert second number ", cin >> b;
    cout << "The result is : " << multiplication (a,b);
}