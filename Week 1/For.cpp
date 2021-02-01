/*1. В последовательности из десяти вещественных чисел, введенных пользователем,
 определить наибольшее отрицательное число и его порядковый номер. 
*/

#include <iostream>
 
using namespace std;
 
int main()
{
    double arr[10];
    int i;
    for (i = 0; i < 10; i++) cin >> arr[i];
    int min_i = -1;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < 0 && (min_i == -1 || arr[i] < arr[min_i])) min_i = i;
    }
    if (min_i == -1)
    {
        cout << "No negative numbers!";
        cout << "Index: " << min_i << ", value: " << arr[min_i] << endl;
    }
}


/*2. Написать программу, определяющую, является ли введенное число простым или составным. */

# include <iostream> 
using namespace std;

int main (){
int number; 
cout << "Your Number", cin >> number;
for (i = 0; )







}

// сдаюсь..

/*3. Написать программу, которая находит НОД(наибольший общий делитель) двух целых
чисел, введенных пользователем. */

# include <iostream>

using namespace std; 

int main ()
{

int firstNumber, secondNumber, nod; 

cout << "Please insert your first number ", cin >> firstNumber; 
cout << "Please insert your second number ", cin >> secondNumber; 

for (int i = 0; firstNumber%i=0 && secondNumber%i=0; i++ )

;}
// сложно :(

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