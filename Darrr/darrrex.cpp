/* 1. Создать динамический массив на 10 элементов заполненный случайными
числами. Написать функции:
a) удаления всех четных элементов;
b) добавления элемента в нулевую позицию;
c) удаления диапазона элементов (от m до n);
d) изменения размера массива. Если новый размер больше исходного, то
все новые элементы заполнить нулями. */

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

void remove_even (int *&arr, int &size)
    {
        int new_size = 0;
        // for (int i = 0; i < size; i++)
        // {
        //     if (arr[i] % 2 != 0)
        //     {
        //         new_size++;
        //     }
        // }
        int *new_arr = new int [new_size];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 != 0)
            {
                new_arr[new_size++] = arr[i];
            }
        }
        delete [] arr;
        arr = new_arr;
        size = new_size;
    }

void add_zero (int *&arr, int &size, int valure)
    {
        int new_size = size + 1;
        int *new_arr = new int [new_size];
        new_arr[0] = valure;
        int counter = 0;
        for (int i = 1; i < new_size; i++)
        {
            new_arr[i] = arr[counter++];
        }
        delete [] arr;
        arr = new_arr;
        size = new_size;
    }

void delete_in (int *&arr, int &size, int from, int till)
    {
        int new_size = size - (till - from + 1);
        int *new_arr = new int [new_size];
        for (int i = 0, j = 0; i < size; i++)
        {
            if (i < from || i > till)
            {
                new_arr[j++] = arr[i];
            }
        }
        delete [] arr;
        arr = new_arr;
        size = new_size;
    }

void change_size (int *&arr, int &size, int new_size)
{
    int *new_arr = new int [new_size] {0};
    for (size_t i = 0;i < size && i < new_size; ++i)
    {
        new_arr[i] = arr[i];
    }
    delete [] arr;
    arr = new_arr;
    size = new_size;
}

void haha()
{

 srand (time(0));
    int size = 10;
    int *arr = new int [size];
    fillArray(arr,size,0,10);
    printArray(arr,size);
    cout << "The Array is Ready" << endl;
    cout << "Please select your operation" << endl;
    cout << "1. Remove even numbers" << endl;
    cout << "2. Add an element in 0 position" << endl;
    cout << "3. Remove elements from n to m" << endl;
    cout << "4. Change the array dimension" << endl;
    int caser;
    cin >> caser;
    if (caser != 1 && caser != 2 && caser != 3 && caser != 4)
    {
        cout << "You have dialed an incorrect imput. \n Please try again!" << endl;
        cin >> caser;
    }
    switch (caser)
        {
            case 1: 
                remove_even(arr,size);
                printArray(arr,size);
                break;
            case 2: 
                cout << "Please insert what do you want to insert in 0 position" << endl;
                int valure;
                cin >> valure;
                add_zero(arr,size,valure);
                printArray(arr,size);
                break;
            case 3:
                cout << "Please insert your n" << endl;
                int n;
                cin >> n;
                cout << "Please insert your m" << endl;
                int m;
                cin >> m;
                delete_in(arr,size,n,m);
                printArray(arr,size);
                break;
            case 4:
                cout << "Please insert the new array length" << endl;
                int length;
                cin >> length;
                change_size(arr,size,length);
                printArray(arr,size);
                break;
        }
    system("pause");
    // change_size(arr,size,13);
    // printArray(arr,size);

    // delete_in(arr,size,2,6);
    // printArray(arr,size);

    // add_zero(arr,size,322);
    // printArray(arr,size);

    // remove_even(arr,size);
    // printArray(arr,size);
    delete [] arr;

}
int main ()
{
   haha();
   haha();
   haha();
}