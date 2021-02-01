/*4. Написать функцию, которая сравнивает два целых числа и возвращает результат
сравнения в виде одного из знаков: >, < или =. */


# include <iostream>
using namespace std;

int maximus (int a, int b)
{
    if      (a>b){cout << a << ">" << b << endl; return 0;}
    else if (a<b){cout << b << "<" << a << endl; return 0;}
    else         {cout << a << "=" << b << endl; return 0;}
}

int main ()
{
    int a, b;
    cout << "Insert the first number ", cin >> a;
    cout << "Insert the second number ", cin >> b;
    cout << "The result is : " << maximus (a,b);
}