/*3. Определить, является ли сумма элементов двумерного массива четырехзнач-
ным числом. */

# include <iostream> 
# include <ctime>
using namespace std; 

bool Isfournumbers(int val)
{
return val > 999 && val < 10000;
}

int main ()
{
srand (time(0));
int array [5][5];
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    array [i] [j] = rand() % (500 - (0) + 1) + (0);
}
cout << "The array is: ";
for (int i = 0; i < 5; i++)
{
    cout << endl;
    for (int j = 0; j < 5; j++)
    {
    cout << array [i][j] << "\t" << "|";
    }
}
cout << endl;
int sum = 0; 
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
    sum += array [i][j];
    }
}
cout << "The sum is: " << sum << endl;
cout << (Isfournumbers(sum) ? "And the sum have four digits" :"And the sum doesn't have four digits") << endl;
}