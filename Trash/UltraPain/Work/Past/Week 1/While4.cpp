/*Написать программу, выводящую на экран ряд чисел Фибоначчи до значения, указан-
ного пользователем(Числа Фибоначчи - последовательность чисел, каждый член которой равен
сумме двух предыдущих).*/

#include <iostream> 
using namespace std;
 
int fibbonaci(int n,) 
{
    if ( n == 1 || n == 2) return (n -1); 
    return f(n-1) + f(n-2); 
;}
 
int main()
{
    int n;    
    cout << "n="; cin >> n;       
    cout <<fibbonaci(n)<<" ";    
    cout <<endl;
return 0;
}