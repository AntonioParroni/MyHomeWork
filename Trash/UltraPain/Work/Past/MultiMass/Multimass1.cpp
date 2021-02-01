/*1. Написать программу, которая случайным образом заполняет двумерный
массив размерностью 3х4 цифрами от -20 до 10. Необходимо найти
количество отрицательных элементов. */ 

# include <iostream> 
# include <ctime>

using namespace std; 

int main ()
{
srand (time(0));
int array [3][4];

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    array [i] [j] = rand() % (10 - (-20) + 1) + (-20);
}
cout << "The array is: " << endl;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    cout << array [i] [j]<< " ";
}
cout << endl;
int counter = 0;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    if (array [i][j] < 0)
    {
        counter++;
    }
}
cout << "The quantity of negative numbers is: " << counter << endl;
}
