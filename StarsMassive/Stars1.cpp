// 1. Написать программу, которая выводит один под другим трафареты:
// Мне нужно больше практики..
# include <iostream> 
using namespace std; 

int main (){

    for (int j = 0; j < 5; j++){ 
        for (int i = 5; i > j; i--){
                cout << "*";
         }
         cout << endl;
    }
    for (int j = 1; j < 5; j++){
        for (int i = 0; i <= j; i++){
                cout << "*";
            }
            cout << endl;
         }
}