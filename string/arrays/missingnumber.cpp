#include<iostream>
using namespace std;

int main()
{
int* arr;
int i,j;
int n;
cin>>n;
arr=(int*)malloc(n*sizeof(int));
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
    
}
   
    return 0;
}