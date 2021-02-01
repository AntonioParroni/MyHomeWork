/*2. Написать функцию, которая возвращает количество цифр в целом числе,
полученном в качестве аргумента. */

# include <iostream>
using namespace std;

int zeros(int a)
{
int counter=0;
while( a > 0) 
{
    a/=10; 
    counter++;
    }
return counter;
}


int main ()
{
    int a, b;
    cout << "Insert the number ", cin >> a;
    cout << "The result is : " << zeros (a);
}

