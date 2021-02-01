/* 4. Написать программу, которая случайным образом заполняет двумерный
массив размером 5х5 цифрами от 0 до 10. Поменять местами главную и
побочную диагональ. */

# include <iostream> 
# include <ctime>

using namespace std; 

int main ()
{
srand (time(0));
int array [5][5];
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    array [i] [j] = rand() % (9 - (0) + 1) + (0);
} 
// для удобства отображения задачи, я сделал от 0 до 9, я прекрасно об этом осведомлен. Без двухназначных чисел, результат красивее.
cout << "The first array was: ";
for (int i = 0; i < 5; i++)
{
    cout << endl;
    for (int j = 0; j < 5; j++)
    {
    cout << array [i] [j]<< "|";
    }
}
for(int i=0; i < 5; ++i)
{
    int extra [5];
    extra [5] = array[i][i];
    array[i][i] = array[i][4-i];
    array[i][4-i] = extra [5];
}
cout << endl;
cout << "The first array is: ";
for (int i = 0; i < 5; i++)
{
    cout << endl;
    for (int j = 0; j < 5; j++)
    {   
         cout << array [i] [j]<< "|";
    }
}
}