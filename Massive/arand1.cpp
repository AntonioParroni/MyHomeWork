// rand() % (максимальное_число - минимальное_число + 1) + минимальное_число
# include <iostream>
# include <ctime> 
using namespace std; 

int main (){

srand (time(0));
int array [10];

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
}