/* 1. Создать динамический массив, размер которого пользователь вводит с
клавиатуры. Заполнить его случайными числами из диапазона [10;20] и
вывести его на экран. */

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void fillArray(int arr[], int size, int min, int max){
    for(int i = 0; i < size; i++){
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

int element_count(int arr[], int size, int elem){
    int r = 0;
    for(int i = 0; i < size; ++i){
        if (arr[i] == elem) r++;
    }
    return r;
}

bool in_array(int arr[], int size, int elem){
    for(int i = 0; i < size; ++i){
        if (arr[i] == elem) return true;
    }
    return false;
}

int main()
{
    cout << "Please insert the desired size" << endl;
    int p_size; 
    cin >> p_size;
    if (p_size < 0)
        {
            cout << "Please insert the correct valure" << endl;
            cin >> p_size;
        }
    int *p_arr = new int [p_size];
    fillArray(p_arr,p_size,10,20);
    printArray(p_arr,p_size);
    delete [] p_arr;
    return 0;
}

/* 2. Создать статический массив на 10 элементов и заполнить его случайными
числами из диапазона [0;5]. Подсчитать количество элементов не равных
нулю. Создать динамический массив соответствующего размера и
скопировать в него все ненулевые элементы. */ 

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void fillArray(int arr[], int size, int min, int max){
    for(int i = 0; i < size; i++){
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

int element_count(int arr[], int size, int elem){
    int r = 0;
    for(int i = 0; i < size; ++i){
        if (arr[i] == elem) r++;
    }
    return r;
}

bool in_array(int arr[], int size, int elem){
    for(int i = 0; i < size; ++i){
        if (arr[i] == elem) return true;
    }
    return false;
}

int main()
{
    int arr [10];
    int p_size = 0;
    int *p_arr = new int [p_size];
    fillArray (arr,10,0,5);
    printArray(arr,10);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != 0)
        {
            p_arr [p_size++] = arr [i];
        }
    }
    printArray(p_arr,p_size);
    delete [] p_arr;
    return 0;
}

/* 3. Программа должна создать два статических массива со случайными
элементами из диапазона [0;10], по 10 элементов в каждом массиве. Создать
динамический массив нужного размера и скопировать в него все четные
элементы из первых двух массивов. Вывести получившийся динамический
массив на экран на отдельной строке. */ 

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void fillArray(int arr[], int size, int min, int max){
    for(int i = 0; i < size; i++){
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

int element_count(int arr[], int size, int elem){
    int r = 0;
    for(int i = 0; i < size; ++i){
        if (arr[i] == elem) r++;
    }
    return r;
}

bool in_array(int arr[], int size, int elem){
    for(int i = 0; i < size; ++i){
        if (arr[i] == elem) return true;
    }
    return false;
}

int main()
{
    int arr_a [10];
    int arr_b [10];
    fillArray (arr_a,10,0,10);
    fillArray (arr_b,10,0,10);
    printArray (arr_a,10);
    printArray (arr_b,10);
    int p_size = 0;
    int *p_arr = new int [p_size];
    for (int i = 0; i < 10; i++)
        {
            if (arr_a [i] % 2 == 0)
            {
                p_arr [p_size++] = arr_a [i];
            }
        }
    for (int i = 0; i < 10; i++)
        {
            if (arr_b [i] % 2 == 0)
            {
                p_arr [p_size++] = arr_b [i];
            }
        }
    printArray(p_arr,p_size);
    delete [] p_arr;
    return 0;
}