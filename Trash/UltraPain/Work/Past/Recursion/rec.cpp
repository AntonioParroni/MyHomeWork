/* 1. Написать функцию, которая выводит на экран цифры числа, принятого в
качестве аргумента, в прямом порядке. */
# include <iostream>
using namespace std; 

void list(int num) 
{
    if( num % 10 == num) 
        {
        cout << num << endl;
        return;
        }
    list ( num / 10 );
    cout << num % 10 << endl ;
}

int main ()
{ 
 list (000001); cout << "\n"; // надеюсь задача такого не требовала
 list (235529); cout << "\n";
}

/*2. Написать функцию, которая возвращает сумму чисел в заданном диапазоне.
Минимальная и максимальная граница диапазона передается в функцию в
качестве параметров. */


#include <iostream>
using namespace std;
 
 
int calc(int start, int end)
{
if (start!=end)
    return start + calc(start+1, end);
return end;
}
int main() 
{
cout << calc(1,7);
	return 0;
}

/*3. Написать функцию, которая возвращает сумму n чисел Фибоначчи. Число n
принимается в качестве аргумента. */

#include <iostream>
using namespace std;
 
int fibsum(int num)
{
    int fib2 = 1;
    int fib1 = 1;
    int res = 1;
 
    if(num > 0 )
        for(int i = 2; i <= num + 1; i++ )
        {
        res = fib1 + fib2;
        fib2 = fib1;
        fib1 = res;
        }
    return res - 1;
}
int main() 
{
cout << fibsum(5);
return 0;
}

/*4. Написать функцию, которая выводит на экран ряд чисел Фибоначчи до n. Число
n принимается в качестве аргумента */
// самое сложное :(
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