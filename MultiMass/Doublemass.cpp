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
// Для удобства отображения задачи, я сделал от 0 до 9. Без двухназначных чисел, красивее отображается.
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