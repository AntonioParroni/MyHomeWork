/*3. Написать функцию, которая возвращает максимальное из двух целых чисел,
полученных в качестве аргумента. */

# include <iostream>
using namespace std;

int maximus (int a, int b)
{
    if(a > b) {return a;}
    else if (a==b){cout << "They are identical " << endl; return 0;}
    else if (a < b){return b;}
}

int main ()
{
    int a, b;
    cout << "Insert the first number ", cin >> a;
    cout << "Insert the second number ", cin >> b;
    cout << "The result is : " << maximus (a,b);
}