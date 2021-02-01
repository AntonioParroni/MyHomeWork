#include <iostream> 
using namespace std;
#define n 10
void sycled_shift_of_array(int *arr, int size_arr, int shift)
{
if(!size_arr || !shift || shift==size_arr)return;
if(shift>size_arr)shift-=size_arr;
int tmp[n-1]={0};
for(int i=0; i<shift; ++i)
{
tmp[i]=arr[size_arr-shift+i];
}
int to_copy_to=size_arr-1;
for(int i=size_arr-shift-1; i>-1; --i,--to_copy_to)
{
arr[to_copy_to]=arr[i];
}
for(int i=0; i<shift; ++i)arr[i]=tmp[i];
}
 
template<typename T>
ostream &show_array(T *arr, int arr_size)
{
for(int i=0; i<arr_size; ++i)cout<<arr[i]<<" ";
return cout;
}
 
void main()
{
int arr[]={3, 1, 6, 3, 8, 5, 6, 2, 8, 9};
 show_array<int>(arr, n)<<endl;
 sycled_shift_of_array(arr, n, 11);
 show_array<int>(arr, n)<<endl;
 cout<<endl;
system("pause");   
return ; 
}