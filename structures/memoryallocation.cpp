#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr=(int*)calloc(1,sizeof(int));
    for (int i = 0; i < 7; ++i)
    {
        ptr[i]=i+1;
    }
    free(ptr);
  
    for (int i = 0; i < 7; i++)
    {
        cout<<ptr[i]<<endl;
    }
    
    return 0;
}