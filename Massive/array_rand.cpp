// rand() % (максимальное_число - минимальное_число + 1) + минимальное_число
# include <iostream> 
# include <ctime> 
# include <algorithm>
using namespace std; 

int main (){

srand (time(0));
int array [10];
// Упражнение №1
for (int i = 0; i < 10; i++){
    array [i] = rand() % (5 - (-5) + 1) + (-5);
}
cout << "The array was: " << endl;;
for (int i = 0; i < 10; i++){
    cout << array [i] << " ";
}
cout << endl;
cout << "And now is: " << endl;
for (int i = 0; i < 10/2; i++)    
    swap (array[i],array[10-1-i]);

for (int i = 0; i < 10; i++){
    cout << array [i] << " ";
}
// Упражнение №2
int size2 = 10;
int array2 [size2];

for (int i = 0; i < 10; i++){
    array2 [i] = rand() % (10 - 0 + 1) + 0;
}
cout << endl;
cout << "The array is: " << endl;
for (int i = 0; i < 10; i++){
    cout << array2[i] << " ";
}
cout << endl;
int remove_index; 
cout << "Please insert the desired index ", cin >> remove_index;
for (int i = remove_index; i < size2; i++){
        array2[i] = array2[i + 1];
    --size2;}
cout << endl;
cout << "The new array is: " << endl;
for (int i = 0; i < 9; i++){
    cout << array2[i] << " ";
}
// Упражение №3
int size1 = 10;
int array3 [size1];

for (int i = 0; i < size1; i++){
    array3 [i] = rand() % (10 - (-9) + 1) + (-9);
}
cout << endl;
cout << "The array was: " << endl;;
for (int i = 0; i < size1; i++){
    cout << array3 [i] << " ";
}
int element;
int quantity = 1;
    
for (int i=0; i < size1-1; i++) {
        int frq = 1;
        for (int k = i+1; k<size1; k++)
            if (array3[i] == array3[k])
                frq += 1;
        if (frq > quantity) {
            quantity = frq;
            element = array3[i];
        }
}
cout << endl;
cout << "The most common number is: " << element << endl;
// Упражнение №4
int size = 10;
int array4 [size];

for (int i = 0; i < size; i++){
    array4 [i] = rand() % (10 - (1) + 1) + (1);
    }
cout << "Unmodified array: " << endl;;
for (int i = 0; i < size; i++){
    cout << array4 [i] << " ";
    }
cout << endl;
int x; 
cout << "Insert how much do you want to move the array" << endl;
cin >> x;
for (int i = 0; i < x; i++){
        for (int j = 1; j < size; j++){
            swap(array4[j], array4[(j - 1) % size ]);
        }
    }
cout << "The array now is: " << endl;
for (int i = 0; i < size; i++){
    cout << array4[i] << " ";
    }
}