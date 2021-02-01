/*5. Написать функцию Procent, которая возвращает процент от полученного в
качестве аргумента числа. */

# include <iostream>
using namespace std;

float procent (float a, float b)
{
    return b/100*a;
}

int main ()
{
    int a, b;
    cout << "Percentage ", cin >> a;
    cout << "Number ", cin >> b;
    cout << "The result is : " << procent (a,b);
}