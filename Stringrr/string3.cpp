/* 3. Пользователь вводит отдельно строку и символ, необходимо показать на экран
номера по порядку всех совпадений (нумерация с единицы).  */

#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    char string[255 + 1];
    cout << "Insert your string " << endl; cin >> string;
    cout << "Old string" << endl;
    for (int i = 0; i < strlen(string); i++)
    {
        cout << string[i];
    }
    cout << endl << "Please insert the symbol" << endl;
    char c;
    cin >> c; cout << endl;
    for (int i=0; i<strlen(string); i++)
        {
            if (string[i] == c) cout << i + 1 << ' ';
        }
}

 
