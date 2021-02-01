# include <iostream> 
# include <ctime> 
using namespace std; 

int main (){

srand (time(0));
int size1 = 10;
int array3 [size1];

for (int i = 0; i < size1; i++){
    array3 [i] = rand() % (10 - (-9) + 1) + (-9);
}
cout << "The array was: " << endl;;
for (int i = 0; i < size1; i++){
    cout << array3 [i] << " ";
}
int element;
int quantity = 1;
    
for (int i=0; i < size1-1; i++) {
        int frq = 1;
        for (int k = i+1; k<size1; k++)
            if (array3[i] == array3[k])
                frq += 1;
        if (frq > quantity) {
            quantity = frq;
            element = array3[i];
        }
}
cout << endl;
cout << "The most common number is: " << element << endl;
}