# include <iostream> 
using namespace std; 

int main (){

    for (int j = 0; j < 8; j++){
        for (int i = 0; i < 8; i++){
            if ((i + j) % 2 == 0){
                cout << "*";
            }
            else { 
                cout << " "; 
            }
         }
         cout << endl;
    }
}