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