# include <iostream> 
using namespace std;


int main ()
{
char buf [500];
cout << "Enter the line ->";
cin.getline(buf, 500);
int len = strlen (buf);
cout << len << endl;
char *str = new char [len + 1];
strcpy(str, buf);
cout << str << endl;
delete[]str;
}