/*1. Написать программу, которая возводит число в соответствующую степень
(без использования стандартных функций). Число и степень вводит пользователь. */

/*# include <iostream> 

using namespace std; 

int main ()
{

int number, exponent, multiplication, result;
cout << "Please imput your number ", cin >> number;
number = result;
cout << "Please imput the desired exponent ", cin >> exponent;

if (number>0 && exponent!=0) 
{
     while (exponent>0)
     {
          number * number = ;
        --exponent;
     cout << "The result is: " << result << endl;
    ;}
;} 
else if (exponent == 0) 
{
    cout << "Any number to the power of 0 is always 1 " << endl;
} 
else
{ 
    cout << "The numbers you dialed are incorrect :)" << endl;
}
}*/

#include <iostream>
using namespace std;
 
long pow(long a, long b) {
  if(b == 0){
    return 1;
  }
  if(b % 2 == 0){
    return pow(a * a, b / 2);
  }
  return a * pow(a, b - 1);
}
 
int main() {
  long a, b;
  cin >> a >> b;
  cout << pow(a,b);
  return 0;
}

// я старался