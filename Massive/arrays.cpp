# include <iostream> 
using namespace std;

int main (){
    int massivenum [9];//1
int i=1;
for (int j= 0; j < 10; j++){
massivenum [j] = i;
i = i + 2;
    }
for (int i = 0; i < 10; i++){
cout << i << " -> " <<  massivenum [i]<< endl;
    }

int massive2 [9];//2
for (int i = 0; i < 10; i++){
    cin >> massive2 [i];
}
int rev_massive [9];
for (int j = 9, y = 0; j > 0, y < 10; j--, y++){
rev_massive [y] = massive2 [j];
}
cout << endl;
for (int x = 0; x < 10; x++){
cout << rev_massive [x] << endl;
    }

int massive [9]; // 3
for (int i = 0; i < 10; i++){
    cout << i <<" : ";
    cin >> massive [i];
}
long multiplication = 1; // 3.a
    for (int i = 0; i< 10; i++){
        multiplication *= massive [i];
    }
    cout << "The multiplication result is " << multiplication << endl;
int max = 0;
for (int i = 0; i < 10; i++){ // 3.b
    if (max < massive [i]){
        max = massive [i];}
}
    cout << "Maximum is " << max << endl;
int min = massive [0]; 
int position = 0;
for (int i = 0; i < 10; i++){ // 3.c
    if (min < massive [i]){;}
    else {min = massive [i];
    position = i;
    }
}
      cout << "Minumum is " << min << " It's postion is " << position << endl;

int zeros = 0;
    for (int i = 0; i < 10; i++){ // 3.d
        if (massive [i] == 0){
            zeros = zeros + 1;
        }
    }
    cout << "The ammount of zeros is " << zeros << endl;


int massive4[5]; // 4
        for (int i = 0; i < 5; i++)
        {
            cin >> massive4[i];
        }
        for (int a = 0; a < 2; a++)
            for (int i = 0; i < 5; i++)
            {
                if (massive4[i] >= 0 && a == 0)
                    cout << massive4[i] << " ";
                else if (massive4[i] < 0 && a == 1)
                    cout << massive4[i] << " ";
            }
}