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
