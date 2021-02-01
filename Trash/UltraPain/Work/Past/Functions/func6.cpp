/*6. Написать функцию, которая, в зависимости от выбора пользователя вызывает
функцию сложения, произведения, вычитания и деления 2-х чисел. */ 
# include <iostream>
# include <ctime> 
using namespace std; 

int multiplicaton (int a, int b)
{
    int result = a * b;
    return result;
}
int addition (int a, int b)
{
    int result = a + b;
    return result;
}
int substraction (int a, int b)
{
    int result = a - b;
    return result;
}
int division (int a, int b)
{
    int result = a / b;
    return result;
}

int main ()
{
    int a, b;
cout << "Insert first operand ", cin >> a;
cout << "Insert second operand ", cin >> b;
int selection = 0; 
cout << "Select the operation \n 1 for multiplication \n 2 for addition \n 3 for substraction \n 4 for division \n",  cin >> selection;
if (selection == 1)
{
   cout << "The result is: " << multiplicaton (a,b);
}
else if (selection == 2)
{
  cout << "The result is: " << addition (a,b);  
}
else if (selection == 3)
{
  cout << "The result is: " << substraction (a,b);  
}
else if (selection == 4)
{
  cout << "The result is: " << division (a,b);  
}
else 
{
  cout << "The number you dialed is incorrect! Please try again!" << endl;
  main ();
}
}