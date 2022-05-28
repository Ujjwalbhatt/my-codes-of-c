#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr=(int*)malloc(1*sizeof(int));
    for (int i = 0; i < 7; ++i)
    {
        ptr[i]=i+1;
    }
  
    for (int i = 0; i < 7; i++)
    {
        cout<<ptr[i]<<endl;
    }
    
    return 0;
}