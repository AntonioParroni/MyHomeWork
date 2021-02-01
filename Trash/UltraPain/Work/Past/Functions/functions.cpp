/*1. Написать функцию, которая возвращает произведение двух целых чисел,
полученных в качестве аргумента. */

# include <iostream>
using namespace std;

int multiplication (int a, int b)
{
    return a * b;
}

int main ()
{
    int a, b;
    cout << "Insert first number ", cin >> a;
    cout << "Insert second number ", cin >> b;
    cout << "The result is : " << multiplication (a,b);
}

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

/*3. Написать функцию, которая возвращает максимальное из двух целых чисел,
полученных в качестве аргумента. */

# include <iostream>
using namespace std;

int maximus (int a, int b)
{
    if(a > b) {return a;}
    else if (a==b){cout << "They are identical " << endl; return 0;}
    else if (a < b){return b;}
}

int main ()
{
    int a, b;
    cout << "Insert the first number ", cin >> a;
    cout << "Insert the second number ", cin >> b;
    cout << "The result is : " << maximus (a,b);
}

/*4. Написать функцию, которая сравнивает два целых числа и возвращает результат
сравнения в виде одного из знаков: >, < или =. */


# include <iostream>
using namespace std;

int maximus (int a, int b)
{
    if      (a>b){cout << a << ">" << b << endl; return 0;}
    else if (a<b){cout << b << "<" << a << endl; return 0;}
    else         {cout << a << "=" << b << endl; return 0;}
}

int main ()
{
    int a, b;
    cout << "Insert the first number ", cin >> a;
    cout << "Insert the second number ", cin >> b;
    cout << "The result is : " << maximus (a,b);
}

/*5. Написать функцию Procent, которая возвращает процент от полученного в
качестве аргумента числа. */

# include <iostream>
using namespace std;

float procent (float a, float b)
{
    return b/100*a;
}

int main ()
{
    int a, b;
    cout << "Percentage ", cin >> a;
    cout << "Number ", cin >> b;
    cout << "The result is : " << procent (a,b);
}

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