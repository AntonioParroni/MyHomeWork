# include <iostream> 
# include <ctime> 
# include <algorithm>
using namespace std; 

int main (){

srand (time(0));
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