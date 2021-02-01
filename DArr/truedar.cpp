/* 1. Программа должна создать два статических массива со случайными
элементами из диапазона [-25;25], по 10 элементов в каждом массиве, вывести
каждый массив на экран на отдельной строке. Затем программа должна создать
динамический массив нужного размера и скопировать в него все
положительные элементы из первых двух массивов. Вывести получившийся
динамический массив на экран на отдельной строке. */

# include <iostream> 
# include <iomanip>
# include <ctime>

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

int main ()
{
srand (time(0));
int array1 [10];
int array2 [10];
int d_size = 0;
fillArray (array1,10,-25,+25);
fillArray (array2,10,-25,+25);
cout << "The first array is: ";
printArray (array1,10);
cout << "The second array is: ";
printArray (array2,10);

for(int i = 0; i < 10; i++) 
{
        if (array1[i] > 0) 
            {d_size++;}
        if (array2[i] > 0)
            {d_size++;}
}
cout << "There are a total of " << d_size << " positive numbers" << endl;
int *p_array = new int[d_size];
int counter = 0;
for (int i = 0; i < 10; i++) 
{
        if(array1[i] > 0) 
        {
            p_array[counter] = array1[i];
            counter ++;
        }
        if(array2[i] > 0) 
        {
            p_array[counter] = array2[i];
            counter ++;
        }
}
cout << "Dynamic Massive is: " << endl;
printArray (p_array,d_size);
delete[] p_array;
}  

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

/* 3. Программа должна создать динамический массив из 20 случайных
элементов из диапазона [1;9] и вывести его на экран. Далее программа должна
скопировать во второй динамический массив только те элементы, которые в
первом массиве встретились ровно 2 раза (если такие будут) и вывести второй
массив на экран на отдельной строке. */

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int arr_length = 20;

void fillArray(int arr[], int min, int max){
    for(int i = 0; i < arr_length; i++){
        arr[i] = rand() % (max - (min) + 1) + (min); 
    }
}

void printArray(int arr[], int length){
    cout << "Array(" << length << "): [";
    for(int i = 0; i < length; i++){
        if(i != 0) cout << ", ";
        cout << arr[i];
    }
    cout << "]" << endl;
}

int element_count(int arr[], int elem){
    int r = 0;
    for(int i = 0; i < arr_length; ++i){
        if (arr[i] == elem) r++;
    }
    return r;
}

bool in_array(int arr[], int elem){
    for(int i = 0; i < arr_length; ++i){
        if (arr[i] == elem) return true;
    }
    return false;
}

int main(){
    srand(time(0));
    int arr_a[arr_length];
    int arr_b[arr_length];
    int pointer = 0;

    fillArray(arr_a, 1, 9);
    printArray(arr_a, arr_length);

    for(int i = 0; i < arr_length; i++)
    {
        if(!in_array(arr_b, arr_a[i]) && element_count(arr_a, arr_a[i]) == 2)
        {
            arr_b[pointer++] = arr_a[i];
        }
    }
    int arr_c[pointer];
    for(int i = 0; i < pointer; i++) 
        {
        arr_c[i] = arr_b[i];
        }

    cout << "Result: " << endl;
    printArray(arr_c, pointer);
    return 0;
}
