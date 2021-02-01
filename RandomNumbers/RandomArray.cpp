# include <iostream>
# include <ctime>
using namespace std; 

int main() {
 srand(time(0));
 int const size = 10;
 int arr[size];
 for (int i = 0; i < size; i++)
 {
  arr[i] = rand() % 20-10;
  }
 for (int i = 0; i < size; i++) {
  cout << arr[i] << " ";
 }
 cout << endl;
 int sum = 0;
 for (int i = 0; i < size; i++)
 {
  sum = sum + arr[i];
 }
 
 cout << "The sum ;" << sum << endl;
 int max = arr[0];
 for (int i = 1; i < size; i++)
 {
  if (arr[i]>max)
  {
   max = arr[i];
  }
 }
 cout << "The max is; "<< max << endl;

 int positiveSum = 0;
 for (int i = 0; i < size; i++)
 {
  if (arr[i] % 2 == 0)
  {
   positiveSum++;
  }
 }
 cout << "Positive Sum is; " << positiveSum << endl;
 }