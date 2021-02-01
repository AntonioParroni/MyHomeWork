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
