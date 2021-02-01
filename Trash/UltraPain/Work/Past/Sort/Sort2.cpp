/*2. Дан массив из 20 целых чисел со значениями от 1 до 20.
Необходимо:
a) написать функцию, разбрасывающую элементы массива произвольным
образом;
b) создать случайное число из того же диапазона и найти позицию этого
случайного числа в массиве;
c) отсортировать элементы массива, находящиеся слева от найденной позиции
по убыванию, а элементы массива, находящиеся справа от найденной
позиции по возрастанию. */
# include <iostream> 
# include <ctime> 
using namespace std;
int main ()
{
srand (time(0));
int size = 20;
int array [size];

for (int i = 0; i < size; i++){
    array [i] = rand() % (20 - (1) + 1) + (1);
    }
cout << "The array was: " << endl;;
for (int i = 0; i < size; i++){
    cout << array [i] << " ";
    }

for (int i = 0; i < size; i++){//a
    swap (array [i], array [rand() % (19 - (0) + 1) + (0)]);
    }
cout << endl << "The array is: " << endl;;
for (int i = 0; i < size; i++){
    cout << array [i] << " ";
    }

int guess = rand() % (20 - (1) + 1) + (1);
int pos = 0;
for (int i = 0; i < size; i++){//b
    if (array [i]==guess)
        {
        pos = i;
        break;
        }
    else {
        pos = 100; // не умею пользоватся NULL, поэтому пока так
         }
    }
cout << endl;
cout << "Random number is " << guess << " and it is in the " << pos << "'pos in the array" << endl;

// c 
if (pos != 100){
int i, j;
int x, y;
	for( i=0; i < size; i++){            
		for( j=pos; j < size ;j++){    //right
			if(array[j-1]>array[j]){
				x=array[j-1];
				array[j-1]=array[j];
				array[j]=x;
			    }
            }
        for( j=pos; j >= 0 ;j--){     //left
			if(array[j+1]>array[j]){
				x=array[j+1];
				array[j+1]=array[j];
				array[j]=x;
			}
		}
	}
}
cout << "The array is: " << endl;
for (int i = 0; i < size; i++)
{
    cout << array [i] << " ";
}
}