#include <iostream>
using namespace std;

void bsa(int *a, int n)
{
    
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void bsad(int *a, int n)
{
    int temp;
    int ifsorted=1;
    for (int i = 0; i < n - 1; i++)
    {
        cout<<"working on pass number: "<<i+1<<endl; 
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                ifsorted=0;
            }
        }
        if(ifsorted==1){
        return;
        }
    }
}
void abs( int *a, int n){
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int a[] = {1, 5, 6, 2, 3, 4};
    int n = 6;
    bsa(a, n);
    bsad(a,n);
    abs(a, n);
  
    return 0;
}