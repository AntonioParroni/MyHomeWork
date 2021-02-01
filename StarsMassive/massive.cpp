# include <iostream>
using namespace std; 

int main (){
cout << "Hello my Dear" << endl;
int massive [9];
for (int j= 0, i=1; j < 10; j++){
while (i < 20){
massive [j]= i;
i + 2;
    }
}
for (int i = 0; i < 10; i++){
cout << massive [i] << "The position is " << i << endl;
    }
}