/* Написать программу, в которой пользователь заполняет массив
из 10 чисел.
Найти:
a. произведение всех элементов массива.
b. максимальный элемент.
c. позицию минимального элемента.
d. количество элементов равных нулю.
*/
# include <iostream>
using namespace std; 

int main (){

int massive [9];
for (int i = 0; i < 10; i++){
    cout << i <<" : ";
    cin >> massive [i];
}
long multiplication = 1;
    for (int i = 0; i< 10; i++){
        multiplication *= massive [i];
    }
    cout << "The multiplication result is " << multiplication << endl;
int max = 0;
for (int i = 0; i < 10; i++){
    if (max < massive [i]){
        max = massive [i];}
}
    cout << "Maximum is " << max << endl;
int min = massive [0];
int position = 0;
for (int i = 0; i < 10; i++){
    if (min < massive [i]){;}
    else {min = massive [i];
    position = i;
    }
}
      cout << "Minumum is " << min << " It's postion is " << position << endl;

int zeros = 0;
    for (int i = 0; i < 10; i++){
        if (massive [i] == 0){
            zeros = zeros + 1;
        }
    }
    cout << "The ammount of zeros is " << zeros << endl;
}
