# include <iostream> 

using namespace std; 
int size = 5;
void print_arr (int array1[size])
{
    
    for (int i = 0; i < 5; i++)
    {
        cout << array1 [i] << "|";
    }
    cout << endl;
}

int main ()
{
int array1 [5] = {5,4,3,2,1};


print_arr (array1); cout << "\n" << endl;


}