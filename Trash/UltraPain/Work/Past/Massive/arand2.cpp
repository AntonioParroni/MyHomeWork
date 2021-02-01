// rand() % (максимальное_число - минимальное_число + 1) + минимальное_число
# include <iostream> 
# include <ctime> 

using namespace std; 

int main (){

srand (time(0));
int size = 10;
int array2 [size];

for (int i = 0; i < 10; i++){
    array2 [i] = rand() % (10 - 0 + 1) + 0;
}
cout << "The array is: " << endl;
for (int i = 0; i < 10; i++){
    cout << array2[i] << " ";
}
cout << endl;
int remove_index; 
cout << "Please insert the desired index ", cin >> remove_index;
for (int i = remove_index; i < size; i++)
        array2[i] = array2[i + 1];
    --size;
    cout << endl;

cout << "The new array is: " << endl;
for (int i = 0; i < 9; i++){
    cout << array2[i] << " ";
}
}