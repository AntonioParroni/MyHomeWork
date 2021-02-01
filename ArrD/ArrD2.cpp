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