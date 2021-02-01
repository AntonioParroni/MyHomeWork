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

/*2. Дан двумерный массив целых чисел. Определить:
а) сумму элементов массива, больших 30;
б) количество нечетных элементов массива;
в) среднее арифметическое четных элементов массива;
г) сумму тех элементов массива, сумма индексов которых равна s. */


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
    array [i] [j] = rand() % (50 - (0) + 1) + (0);
}
cout << "The first array is: ";
for (int i = 0; i < 5; i++)
{
    cout << endl;
    for (int j = 0; j < 5; j++)
    {
    cout << array [i][j] << "\t" << "|";
    }
}
cout << endl;
int s, sum30 = 0, ssum = 0, evensum = 0, evencount = 0, unevencount = 0;
cout << "Insert s ", cin >> s;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (array [i][j] > 30)
        {
            sum30 += array [i][j];
        }
        if (array [i][j] % 2 != 0)
        {
            ++unevencount;
        }
        if (array [i][j] % 2 == 0)
        {
            evensum += array [i][j];
            ++evencount;
        }
        if (array [i][j] + array [j][i] == s)
        {
            ssum += array [i][j] + array [j][i];
        }
    }
}
cout << "The sum of the elements bigger than 30 is: " << sum30 << endl;
cout << "The quantity of uneven elements is: " << unevencount << endl;
cout << "The arithmetical average between even array elements is: " << evensum/evencount << endl;
cout << "The sum of your S sum array indexs numbers: " << ssum << endl;
}

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