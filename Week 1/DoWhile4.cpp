/*В последовательности чисел сравнить, что больше сумма положительных или произведение отрицательных. 
Числа, вводятся с клавиатуры, пока пользователь не введет 0. 
*/

#include <iostream>sd
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x, sum=0, neg=1;
    do
    {
        cout << "Введите число:" << endl;
        cin >> x;
        if (x>0)
            sum+=x;
        if (x<0)
            neg*=x;
    }
    while (x!=0);
    if (sum>neg)
        cout << "Сумма положительных больше! ("<< sum << ')' << endl;
    else
        cout << "произведение отрицательных больше! ("<< neg << ')' << endl;
    system("pause");
    return 0;
}