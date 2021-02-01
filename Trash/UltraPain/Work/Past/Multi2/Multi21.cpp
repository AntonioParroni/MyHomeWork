/*1. Дан двумерный массив. Найти:
а) сумму элементов каждой строки;
б) сумму элементов каждого столбца. */

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
    array [i] [j] = rand() % (5 - (0) + 1) + (0);
}
cout << "The first array was: ";
for (int i = 0; i < 5; i++)
{
    cout << endl;
    for (int j = 0; j < 5; j++)
    {
    cout << array [i][j]<< "|";
    }
}
cout << endl;
int horizontal_sum = 0; 
int vertical_sum = 0;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
    horizontal_sum += array [i][j];
    vertical_sum += array [j][i];
    }
    cout << i+1 << " Line sum is: " << horizontal_sum << endl;
    cout << i+1 << "  Row sum is: " << vertical_sum << endl;
    horizontal_sum = 0;
    vertical_sum = 0;
}
}  
