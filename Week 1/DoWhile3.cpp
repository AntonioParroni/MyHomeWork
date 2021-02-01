/*В последовательности целых чисел определить третье положительное число и подсчитать количество цифр в нем. Числа, вводятся с клавиатуры, пока пользователь не введет
0. */

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x, count=0, tmp, count1=0;
    do
    {
        cout << "Введите число:" << endl;
        cin >> x;
        if (x>0)
            count++;
        if (count == 3)
        {
            tmp = x;
            while (tmp>0)
            {
                tmp = tmp/10;
                count1++;
            }
        }
    }
    while (x!=0);
    cout << "Количество цифр в 3 положительном числе: " << count1 << endl;
    system("pause");
    return 0;
}