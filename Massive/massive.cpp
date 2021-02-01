# include <iostream>
using namespace std; 

int main (){

int massive [9];
int i=1;
for (int j= 0; j < 10; j++){
massive [j]= i;
i = i + 2;
    }
for (int i = 0; i < 10; i++){
cout << i << " -> " <<  massive [i]<< endl;
    }
}