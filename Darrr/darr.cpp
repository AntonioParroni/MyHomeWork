/*1. Написать функцию удаления элемента из одномерного динамического массива по
заданной позиции. Предусмотреть возможность выхода указанной позиции за
пределы массива(не удалять элемент, а выдавать сообщение об ошибке).
*/

#include <iostream>
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
void add_zero (int *&arr, int &size, int value)
{
    int new_size = size + 1;
    int *new_arr = new int [new_size];
    new_arr[0] = value;
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
void delete_special (int *&arr, int &size)
{
    int pos;
    cout << "Please insert your desired position " << endl;
    cin >> pos;
    int *new_arr = new int [size - 1];
    if (pos > size)
    {
        cout << "Your position excels arrays length. \nPlease try again! " << endl;
        return;
    }
    for (int i = 0, j = 0; i < size; i++)
        {
            if (i == pos)
            {
                i++;
            }
            new_arr[j++] = arr [i];
        }
    delete [] arr;
    arr = new_arr;
    size = size - 1;
}

int main ()
{
    srand(time(0));
    int size = 10;
    int *arr = new int [size];
    fillArray(arr,size,0,10);
    printArray(arr,size);
    cout << "The Array is Ready" << endl;
    delete_special(arr,size);
    printArray(arr,size);
}

/*2. Написать программу, в которой создается двумерный динамический массив.
Количество строк и столбцов задает пользователь. Массив заполняется
случайными числами в диапазоне [3,12].
Задание:
a. Поменять местами четные и нечетные строки;
b. Поменять местами четные и нечетные столбцы. */

#include <iostream>
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
void add_zero (int *&arr, int &size, int value)
{
    int new_size = size + 1;
    int *new_arr = new int [new_size];
    new_arr[0] = value;
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
void delete_special (int *&arr, int &size)
{
    int pos;
    cout << "Please insert your desired position " << endl;
    cin >> pos;
    int *new_arr = new int [size-1];
    if (pos > size)
    {
        cout << "Your position excels arrays length. \n Please try again! " << endl;
    }
    for (int i = 0, j = 0; i < size; i++)
        {
            if (i == pos)
            {
                i++;
            }
            new_arr[j++] = arr [i];
        }
    delete [] arr;
    arr = new_arr;
    size = size - 1;
}

int main ()
{
    srand(time(0));
    int rows, cols;
    cout << "Please insert the desired amount of rows" << endl; cin >> rows;
    cout << "Please insert the desired amount of cols" << endl; cin >> cols;
    int **arr = new int* [rows]; // создание массива указателей
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int [cols];
    }

    for (int i = 0; i < rows; i++) // заполнение случайными числами
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % (12 - (3) + 1) + (3);
        }
    }
    cout << "Original array" << endl;
    for (int i = 0; i < rows; i++) // вывод
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr [i][j] << "\t";
        }
        cout << endl;
    }
    //a. Поменять местами четные и нечетные строки;
    //b. Поменять местами четные и нечетные столбцы
//    int temp_arr [rows];
////    for (int i = 0; i < rows; i++) // создание буфферного массива строк
////    {
////        temp_arr[i] = arr[i][0];
////    }
////    for (int i = 0, j = 0, z = 0; i < rows;)
////    {
////            for (int x = 0; x < rows; x++)
////            {
////                temp_arr[x] = arr[x][0];
////            }
////            arr[i][j++] = temp_arr[z];
////            arr[z][j++] = temp_arr[i];
////            i += 2, z += 2;
////            for (int y = 0; y < rows; y++)
////            {
////                temp_arr[y] = 0;
////            }
////    }
//
//    for (int i = 0, j = 1, z = 0; i < rows; z++)
//    {
//        for (int x = 0; x < rows; x++)
//        {
//            for (int xy = 0; xy < rows; xy++)
//            {
//                temp_arr[xy] = arr[x][xy];
//                continue;
//            }
//        }
//        arr[i][z] = temp_arr[j];
//        arr[j][z] = temp_arr[i];
//        i += 2, j += 2;
//        for (int y = 0; y < rows; y++)
//        {
//            temp_arr[y] = 0;
//        }
//    }
    int num;
    for (int i = 0; i < rows - 1; i += 2) // свап строк
        // парадоксально, но старая домашка оказалась лучше
    {
        for (int j = 0; j < cols; j++)
        {
            num = arr[i][j];
            arr[i][j] = arr[i + 1][j];
            arr[i + 1][j] = num;
        }
        cout << endl;
    }
    cout << "Array with swapped rows " << endl;
    for (int i = 0; i < rows; i++) // вывод2
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr [i][j] << "\t";
        }
        cout << endl;
    }
    int num2;
    for (int i = 0; i < cols; i ++) // свап столбиков
        // парадоксально, но старая домашка оказалась лучше
    {
        for (int j = 0; j < rows - 1;)
        {
            num2 = arr[i][j];
            arr[i][j] = arr[i][j +1];
            arr[i][j + 1] = num2;
            j = j + 2;
        }
        cout << endl;
    }
    cout << "Array with swapped cols " << endl;
    for (int i = 0; i < rows; i++) // вывод2
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr [i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) // удаление
    {
        delete [] arr[i];
    }
    delete [] arr;
}

/*3. Написать программу, в которой создается двумерный динамический массив.
Количество строк задает пользователь. Количество столбцов генерируется
случайным образом(для каждой строки) в диапазоне от 5 до 10 элементов.
Заполнить массив случайными числами в диапазоне [0,100] и вывести его на
экран. Найти номер строки, сумма элементов которой является максимальной. */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void fillArray(int arr[], int size, int min, int max){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % (max - (min) + 1) + (min);
    }
}
void printArray(int arr[], int length)
{
    cout << "Array(" << length << "): [";
    for(int i = 0; i < length; i++)
    {
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
void add_zero (int *&arr, int &size, int value)
{
    int new_size = size + 1;
    int *new_arr = new int [new_size];
    new_arr[0] = value;
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
void delete_special (int *&arr, int &size)
{
    int pos;
    cout << "Please insert your desired position " << endl;
    cin >> pos;
    int *new_arr = new int [size-1];
    if (pos > size)
    {
        cout << "Your position excels arrays length. \n Please try again! " << endl;
    }
    for (int i = 0, j = 0; i < size; i++)
    {
        if (i == pos)
        {
            i++;
        }
        new_arr[j++] = arr [i];
    }
    delete [] arr;
    arr = new_arr;
    size = size - 1;
}

int main ()
{
    srand(time(0));
    int rows, cols;
    cout << "Please insert the desired amount of rows" << endl; cin >> rows;
    int **arr = new int* [rows]; // создание массива указателей
    int arr_cols [rows];
    for (int i = 0; i < rows; i++)
    {
        arr_cols[i] = cols = rand() % (10 - (5) + 1) + (5);
        arr[i] = new int [cols];
    }

    cout << "Length of rows is: " << endl;
    for (int i = 0; i < rows;i++)
    {
        cout << arr_cols[i] << " ";
    }
    for (int i = 0; i < rows; i++) // заполнение
    {
        for (int j = 0; j < arr_cols[i] ; j++)
        {
            arr [i][j] = rand() % (100 - (0) + 1) + (0);
        }
    }
    cout << endl;
    cout << "Original array" << endl;
    for (int i = 0; i < rows; i++) // вывод
    {
        for (int j = 0; j < arr_cols[i] ; j++)
        {
            cout << arr [i][j] << "\t";
        }
        cout << endl;
    }
    int row_sum[rows][2];
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < arr_cols[i]; j++)
        {
            sum += arr[i][j];
        }
        row_sum [i][0] = i;
        row_sum [i][1] = sum;
    }
    cout << endl;
    cout << "Array rows sum is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << "Row [" << row_sum[i][0] << "] Sum: " << row_sum[i][1] << " ";
        }
        cout << endl;
    }

    int max = row_sum[0][0];
    int position;
    for (int i = 1; i < rows; i++)
    {
        if (row_sum[i][1] > max)
        {
            max = row_sum[i][1];
            position = i;
        }
    }
    cout << "Maximum row is [" << position << "] with sum : " << max << endl;
    for (int i = 0; i < rows; i++) // удаление
    {
        delete [] arr[i];
    }
    delete [] arr;

}