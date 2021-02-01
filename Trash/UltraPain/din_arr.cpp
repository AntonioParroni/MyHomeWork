#include <iostream>
#include <iomanip>

using namespace std;

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void push_back(int **arr, int *size, int val)
{
    int *tmp = new int[*size + 1]; // 1
    for (int i = 0; i < *size; ++i) // 2
    {
        tmp[i] = *(*arr + i);
    }
    delete[]*arr; // 3
    *arr = tmp; // 4
    tmp[*size] = val;
    (*size)++;
}

void push_back(int *&arr, int &size, int val)
{
    int *tmp = new int[size + 1]; // 1
    for (int i = 0; i < size; ++i) // 2
    {
        tmp[i] = arr[i];
    }
    delete[]arr; // 3
    arr = tmp; // 4
    arr[size] = val;
    size++;
}

void Swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void erase(int *&arr, int &size, int pos)
{
    if (pos < 0 || pos >= size)
        return;
    int *tmp = new int[--size];   // 1
    for (int i = 0, j = 0; i < size; ++i, ++j) // 2
    {
        if (i == pos)
        {
            j++;
        }
        tmp[i] = arr[j];

    }
    delete[] arr; // 3
    arr = tmp; // 4
}

void fill_array(int **arr, int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            arr[i][j] = rand() % 30;
        }
    }
}

void print_array(int **arr, int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int find_max(int **arr, int row, int col)
{
    int tmp = arr[0][0];
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (arr[i][j] > tmp)
                tmp = arr[i][j];
        }
    }
    return tmp;
}

void remove_row(int **&arr, int &row, int col, int pos)
{
    if (pos < 0 || pos >= row)
        return;
    int **tmp = new int *[--row];   // 1
    for (int i = 0, j = 0; i < row; ++i, ++j) // 2
    {
        if (pos == i)
        {
            j++;
        }
        tmp[i] = arr[j];
    }
    delete[]arr[pos]; // 3
    delete[]arr;      // 3
    arr = tmp;   // 4
}

int main()
{
    int row, *col;
    cout << "Enter the size->";
    cin >> row;
    int **arr = new int *[row];
    col = new int[row];
    for (int i = 0; i < row; ++i)
    {
        col[i] = rand() % 10 + 5;
        arr[i] = new int[col[i]];
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col[i]; ++j)
        {
            arr[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col[i]; ++j)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }


    cout << "Enter two rows->";
    int p1, p2;
    cin >> p1 >> p2;

    /*int * tmp =arr[p1] ;
    arr[p1] = arr[p2];
    arr[p2] = tmp;*/
    swap(arr[p1], arr[p2]);
    /* int temp = col[p1];
     col[p1] = col[p2];
     col[p2] = temp;*/
    swap(col[p1], col[p2]);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col[i]; ++j)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; ++i)
    {
        delete[]arr[i];
    }
    delete[]arr;
    delete[]col;
    /*int row = 5;
    int **arr = new int *[row];
    for (int i = 0; i < row; ++i)
    {
        arr[i] = new int [i+1]{};
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < i+1; ++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < row; ++i)
    {
        delete[]arr[i];
    }
    delete[]arr;*/
    /*int row = 3, col = 4;
    int **arr = new int *[row];
    for (int i = 0; i < row; ++i)
    {
        arr[i] = new int[col];
    }
    //+++++++++++++++++++++++++++++++++++++++
    fill_array(arr,row,col);
    print_array(arr,row,col);
    int max = find_max(arr,row, col);
    cout<<max<<endl;
    remove_row(arr,row, col, 0);
    print_array(arr,row,col);
    // +++++++++++++++++++++++++++++++++++++
    for (int i = 0; i < row; ++i)
    {
        delete[]arr[i];
    }
    delete[]arr;*/
    /* int a = 5;
     int * pa = &a;
     int ** ppa = &pa;
     cout<<a<<endl;
     cout<<*pa<<endl;
     cout<<**ppa<<endl;
     int & ra = a;
     cout<<ra<<endl;
     int* &rpa = pa;
     cout<<*rpa<<endl;*/
    /*int size = 5;
    int *arr = new int[size]{1, 2, 3, 4, 5};
    print_array(arr, size);
    push_back(&arr, &size, 100);
    push_back(&arr, &size, 45);
    push_back(&arr, &size, 188);
    push_back(&arr, &size, 943);
    push_back(&arr, &size, 2);
    push_back(&arr, &size, 49);
    push_back(arr,size,100);
    push_back(arr,size,567);

    print_array(arr, size);
    erase(arr,size,2);
    print_array(arr, size);
    delete[]arr;*/
}

