# include <iostream>
using namespace std;

int main (){

int massive [9];
for (int i = 0; i < 10; i++){
    cin >> massive [i];
}
int rev_massive [9];
for (int j = 9, y = 0; j > 0, y < 10; j--, y++){
rev_massive [y] = massive [j];
}
cout << endl;
for (int x = 0; x < 10; x++){
cout << rev_massive [x] << endl;
    }
}