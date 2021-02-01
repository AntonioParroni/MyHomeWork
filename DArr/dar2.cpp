/* 3. Программа должна создать динамический массив из 20 случайных
элементов из диапазона [1;9] и вывести его на экран. Далее программа должна
скопировать во второй динамический массив только те элементы, которые в
первом массиве встретились ровно 2 раза (если такие будут) и вывести второй
массив на экран на отдельной строке. */

#include <iostream>
#include <iomanip>
#include <ctime>
 
using namespace std;
 
void fillArray(int arr[], int size, int min, int max)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (max - (min) + 1) + (min); 
    }
}
 
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "|" << setw(3) << arr[i];
    }
    cout << "|" << endl;
}

bool in_array(int *pArr, int n, int elem)
{
    for (int i = 0; i < n; ++i)
    {
        if (pArr[i] == elem)
            return true;
    }
    return false;
}

int main()
{
srand (time(0));
int arr_a [20];
int c_size = 0;
int b_size = 0;
int *arr_b = new int [b_size];
int *arr_c = new int [c_size];

fillArray(arr_a,20,1,9);
printArray(arr_a,20);


for (int i = 0; i < 20; i++)
{
int reqCount = 0;
    for (int j = 0; j < 20; j++)
    {
        if (arr_a [i] == arr_a [j])
        {
            reqCount++;
        } 
    }
   if (reqCount == 2)
        {
            arr_c[c_size++] = arr_a[i];
        } 
}
for (int i = 0; i < c_size; i++)
{
    for (int j = 0; j < c_size; j++)
    {
        if (arr_c [i] != arr_c[j])  
        {
        arr_b [b_size++] = arr_c [i];
        }
    }
}
cout << "Result: " << endl;
printArray (arr_c,c_size);
printArray (arr_b,b_size);
delete[] arr_c, arr_b;
return 0;
}