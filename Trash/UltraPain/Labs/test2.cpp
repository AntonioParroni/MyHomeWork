# include <iostream> 
using namespace std; 

int main () {
    int i, j;
    int k = 8;

    for (i = 1; i<=k; i++){
        for (j=i; j<=k; j++){
                cout << " ";
        }
        for (j = 0; j<i; j++){
                cout << "*";
        }
        cout << endl;
    }
}