// Не все идеально, мне нужно больше практики. Но надеюсь в будущем будет лучше.
# include <iostream> 
using namespace std; 

int main (){
    for (int j = 0; j < 8; j++){ //а
        for (int i = 0; i <= j; i++){
                cout << "*";
            }
            cout << endl;
         }
cout << "--------" << endl;
     for (int j = 0; j < 8; j++){ //б
        for (int i = 8; i > j; i--){
                cout << "*";
         }
         cout << endl;
    }
cout << "--------" << endl;
    int i, j;
    int k = 8;
    for (i = 1; i<=k; i++){//в
        for (j = 1; j<i; j++){
                cout << " ";
        }
        for (j=i; j<=k; j++){
                cout << "*";
        }
        cout << endl;
    }
cout << "--------" << endl;
    for (i = 1; i<=k; i++){//г
        for (j=i; j<k; j++){
                cout << " ";
        }
        for (j = 0; j<i; j++){
                cout << "*";
        }
        cout << endl;
    }
cout << "--------" << endl;
    for (int j = 0; j < 5; j++){//2
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
cout << "--------" << endl;
    for (int j = 0; j < 8; j++){//3
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
