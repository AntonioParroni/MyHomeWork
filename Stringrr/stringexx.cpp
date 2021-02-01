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

 /* 4. Пользователь вводит отдельно строку и символ, необходимо показать на экран номер
только последнего совпадения (нумерация с единицы).   */

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
    int last = -1;
    for (int i=0; i < strlen(string); i++)
    {
        if (string[i] == c)
        {
            last = i + 1;
        }
    }
    if ( last == -1) cout << "No symbol";
    else cout << last;
}

 


