/*Написать программу поиска произведения последовательности положительных чисел,
вводимых с клавиатуры, пока пользователь не введет 0.*/
# include <iostream> 
using namespace std;
int razrad(int m)
{
	int result=0;
	if (m==0)	
		return(1);	
	if (m < 0)	
		m = -m;	
	for( ; m > 0 ; )
	{
		m = (m - m % 10)/10;
		result++;		
	}
	return result;
}

////////////////////

/*2. Написать программу, которая "задумывает" число в диапазоне от 1 до 10 и предлагает
пользователю угадать число за 5 попыток. Ниже приведен рекомендуемый вид экрана во
время выполнения программы . */

// я еще не дошел до изучения таких функций как random, поэтому извните) 

# include <iostream> 
using namespace std; 

int main (){
    int numberX = 1971;


    do {
        int number, five;
        five = 5;
        cin >> number;
        cout << "Ваше число неверно :(" << endl;
        five--;
    }
    (five>0)
    
;}
/////////////////////////////////

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