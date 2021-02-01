/* Программа должна создать два статических массива со случайными
элементами из диапазона [-25;25], по 10 элементов в каждом массиве, вывести
каждый массив на экран на отдельной строке. Затем программа должна создать
динамический массив нужного размера и скопировать в него все
положительные элементы из первых двух массивов. Вывести получившийся
динамический массив на экран на отдельной строке. */

# include <iostream> 
# include <ctime>

using namespace std; 

int main ()
{
srand (time(0));
int array1 [10];
int array2 [10];
int d_size = 0;
for (int i = 0; i < 10; i++)
{
     array1 [i] = rand() % (25 - (-25) + 1) + (-25);
     array2 [i] = rand() % (25 - (-25) + 1) + (-25);
}
cout << "The first array is: ";
for (int i = 0; i < 10; i++)
{
    cout << array1 [i] << "|";
}
cout << endl;
cout << "The second array is: ";
for (int i = 0; i < 10; i++)
{
    cout << array2 [i] << "|";
}

for(int i = 0; i< 10; i++) 
{
        if (array1[i] > 0 ) 
            {d_size++;}
        if(array2[i] > 0 )
            {d_size++;}
    }

int *p_array = new int[d_size];
for(int i = 0; i < 10; i++) 
{
        if(array1[i] > 0) 
        {
            p_array[d_size] = array1[i];
            d_size++;
        }
}
cout << endl;
cout << "Dynamic Massive is: " << endl;
for (int i = 0; i < d_size; i++) 
{
    
         cout << p_array[i] << " ";
}
delete[] p_array;
}  