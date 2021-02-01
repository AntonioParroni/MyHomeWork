/*5. Написать программу, которая случайным образом заполняет двумерный
массив размером 6х6 цифрами от 0 до 10. Поменять местами 1-ю и 2-ю
строки, 3-ю и 4-ю строки, 5-ю и 6-ю строки двумерного массивa */

# include <iostream> 
# include <ctime>

using namespace std; 

int main ()
{
srand (time(0));
int array [6][6];
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    array [i] [j] = rand() % (10 - (0) + 1) + (0);
}
cout << "The first array was: " << endl;
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    cout << array [i] [j]<< " ";
    cout << "\t" << endl;
}
for (int i = 0; i < 6; 1 + i++)
{
    for (int j = 5; j >= 0; --j)
    {
        int exa [6];      
        if (i % 2 == 0 || i == 0)   
        {                               // res
        exa [6] = array[i][j];          // res = 1
        array[i][j] = array[i+1][j];    // 1 = 2
        array[i+1][j] = exa[6];         // 2 = res
        }
    }
}
cout << "The first array is: " << endl;
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    cout << array [i][j]<< " ";
    cout << "\t" << endl;
}
}