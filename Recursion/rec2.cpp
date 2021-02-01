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