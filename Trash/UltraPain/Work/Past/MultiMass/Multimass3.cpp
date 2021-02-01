/*3. Написать программу, которая случайным образом заполняет двумерный
массив размером 3х4 цифрами от 0 до 4. Найти произведение ненулевых
элементов массива. */

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
    array [i] [j] = rand() % (4 - (0) + 1) + (0);
}
cout << "The array is: " << endl;;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    cout << array [i] [j]<< " ";
    if (array [0][3])
    {
        cout << "|| ";
    }
}
cout << endl;
int result = 1;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    if (array [i][j] !=0)
    {
        result *= array [i][j];
    }
}
cout << "The resut is: " << result << endl;
}