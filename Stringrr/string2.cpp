/* 2. Удалить с m по n символов, перезаписать строку и показать ее на экран */
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
        for (int i = 0, j = 0, z = 0; i < strlen(string); i++)
            {
            if (i >= m && i <= n) // я не знаю как сделать так, чтобы оно перестало выписывать промежуточные буквы, извините
            {
                i++;
            }
            new_string[j++] = string[i];
            cout << new_string[z++];
            }
        }
} 
