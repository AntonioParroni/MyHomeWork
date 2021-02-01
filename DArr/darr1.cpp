/* 2. Программа должна создать два статических массива со случайными
элементами из диапазона [5;20], по 10 элементов в каждом массиве, вывести
каждый массив на экран на отдельной строке. Затем программа должна создать
динамический массив нужного размера и скопировать в него все общие
элементы из первых двух массивов(без повторений). Вывести получившийся
динамический массив на экран на отдельной строке. */

#include <iostream>
#include <algorithm>
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
int a = 10;
int b = 10;
int *arr_a = new int[a];
int *arr_b = new int[b];
int *arr_c = new int[max(a, b)];
int c_size = 0;
fillArray(arr_a,a,5,20);
fillArray(arr_b,a,5,20);
printArray(arr_a,a);
printArray(arr_b,b);

for (int i = 0; i < a; ++i)
    {
        if (in_array(arr_b, b, arr_a[i]) && !in_array(arr_c, c_size, arr_a[i]))
        {
            arr_c[c_size++] = arr_a[i];
        }
    }
cout << "Result: " << endl;
printArray (arr_c,c_size);
delete[] arr_a, arr_b, arr_c;
return 0;
}