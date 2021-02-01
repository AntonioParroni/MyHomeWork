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