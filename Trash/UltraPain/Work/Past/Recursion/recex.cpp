# include <iostream> 
using namespace std; 

int power (int number, int pow, int res = 1)
{
    if (pow <= 1)
    {
    return res;
    }
return power (res *= number, --pow);
}

int main ()
{
    int number, pow;
    cin >> number >> pow;
    cout << power (number, pow);
}