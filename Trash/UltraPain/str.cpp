#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>

using namespace std;

int s_len(char *str)
{
    int n = 0;
    while (str[n] != '\0')
    {
        n++;
    }
    return n;
}

void s_cpy(char *dest, char *src)
{
    // 1
    /*int size = s_len(src)+1;
    for (int i = 0; i < size; ++i)
    {
        dest[i] = src[i];
    }*/
    // 2
    int n = 0;
    do
    {
        dest[n] = src[n];
    } while (dest[n++] != '\0');
    // 3
    //while (*(dest++) = *(src++));
}

int main()
{
    /*char arr[6] = {'H','e','l','l','o','\0'};
    char mas[6] = "Hello";
    cout<<arr<<endl;
    cout<<mas<<endl;*/
    /*int age;
    cout<<"Enter your age->";
    cin>>age;
    cin.ignore();
    cout<<age<<endl;
    char name[20];
    char surname[20];
    cout<<"Enter your name->";
    //cin>>name;
    cin.getline(name, 20);
    cout<<"Enter your surname->";
    //cin>>name;
    cin.getline(surname, 20);
    cout<<name<<endl;
    cout<<surname<<endl;*/
    /*char buf[500];
    cout << "Enter the line->";
    cin.getline(buf, 500);
    int len = strlen(buf);
    cout << len << endl;
    char *str = new char[len + 1];
    strcpy(str, buf);
    cout << str << endl;
    delete[]str;*/
    char arr[] = "Hello";
    char mas[] = "Hello";
    if (strcmp(arr, mas) == 0)
    {
        cout << "+++" << endl;
    }
    else
    {
        cout << "---" << endl;
    }

    //cout<<strchr("qqq ww qqq wwdd", 'w')<<endl;

    /*
      int strlen(char*);
      char* srtcpy(char*dest, char*src);
      char* srtcat(char*dest, char*src);
      int strcmp(char*s1, char*s2);
      char* strstr(char*str, char*substr);
      char* strchr(char*str, char ch);
      char* strtok(char*str, char*sep);
     * */
}

