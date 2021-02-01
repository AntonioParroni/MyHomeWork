/*1. Дан массив случайных чисел в диапазоне от -20 до +20. Необходимо найти
позиции крайних отрицательных элементов (самого левого отрицательного
элемента и самого правого отрицательного элемента) и отсортировать элементы,
находящиеся между ними. */ 
# include <iostream> 
# include <ctime> 
using namespace std;
int main ()
{
srand (time(0));
int array [10];

for (int i = 0; i < 10; i++){
    array [i] = rand() % (20 - (-20) + 1) + (-20);
}
cout << "The array was: " << endl;;
for (int i = 0; i < 10; i++){
    cout << array [i] << " ";
}
int min=0,max=0;
  for(int i=0; i< 10; i++)
    {
    if (array[i]<0)
        {
        min = i;
        break;
        }
    }
  for(int i=9 ;i >= 0; i--)
    {
      if (array[i]<0)
        {
        max = i;
        break;
        }
    }   
int dist = max - min;
cout << endl;
cout << "Minimum is : " << min << endl << "Maximum is : " << max << endl;
//for (int array[min]; array[max] == array [min]; array[min++])

int i, j;
int x;
	for(i=min;i<max;i++){         
		for(j=max-1;j>i;j--){    
			if(array[j-1]>array[j]){
				x=array[j-1];
				array[j-1]=array[j];
				array[j]=x;
			}
		}
	}
cout << "The array is: " << endl;;
for (int i = 0; i < 10; i++)
{
    cout << array [i] << " ";
}
}