/*4. Написать программу, которая из пяти введенных пользователем чисел, определяет число
с наибольшей суммой цифр. */

#include <iostream>
using namespace std;
 
int main()
{
int n=5;
int* arr = new int [n];
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
    int max=0;
for (int i=0; i<n; i++)
{
if (arr[i]>max)
   max=arr[i];   
}
  cout<<"Resut is " <<max;
}

// практически сам..