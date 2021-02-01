/*2. Написать программу, которая случайным образом заполняет двумерный
массив размером 6х6 цифрами от 0 до 10 и одномерный массив из 6-ти
чисел. Нужно нечетные строки двумерного массива заменить на одномерный
массив. */

# include <iostream> 
# include <ctime>

using namespace std; 

int main ()
{
srand (time(0));
int array [6][6];
int array2 [6];

for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    array [i] [j] = rand() % (10 - (0) + 1) + (0);
}
for (int i = 0; i < 6; i++)
{
    array2 [i] = rand() % (10 - (0) + 1) + (0);
}
cout << "The first array was: " << endl;;
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    cout << array [i] [j]<< " ";
    if (array [0][5])
    {
        cout << "|| ";
    }
}
cout << endl;
cout << "The second array is :" << endl;
for (int i = 0; i < 6; i++)
    {
        cout << array2 [i] << " ";
    }
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    {
        if (array [i][j] %2 == 0)
        {}
        else {array [i][j] = array2 [i];}
    }
}
cout << endl;
cout << "The first array now: " << endl;;
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    cout << array [i] [j]<< " ";
    if (array [0][5])
    {
        cout << "|| ";
    }
}
}