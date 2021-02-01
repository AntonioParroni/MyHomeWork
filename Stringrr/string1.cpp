 
/* 1. Показать на экран с m по n символов строки, введенной пользователем и записать
данный отрезок в другой массив. (m и n также вводятся пользователем) */
#include <iostream>
#include <cstring>

using namespace std;

int main () {
    int m, n;
    cout << "Please insert your m \n";
    cin >> m;
    cout << "Please insert your n \n";
    cin >> n;
    char string[255 + 1];
    cout << "Insert your string " << endl; cin >> string;
    if (m - 1 < 0 || n > strlen(string))
        {
        cout << "Wrong diapason";
        }
    else
        {
        char new_string[255 + 1];
        cout << "Old string" << endl;
        for (int i = 0; i < strlen (string); i++)
        {
            cout << string [i];
        }
        cout << endl << "New string" << endl;
        for (int i = m, j = 0, z = 0; i < n; i++)
            {
            new_string[j++] = string[i];
            cout << new_string[z++];
            }
        }
}