 # include <iostream> 
using namespace std;

int main()
{
int massive4[5];
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
