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