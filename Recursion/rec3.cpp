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