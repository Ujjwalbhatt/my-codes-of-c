#include <iostream>
using namespace std;

void bsa(int *a, int n,int *p)
{
  
    for (int i = 0; i <= n; i++)
    {
       p[i]=a[i];
    }
    
}

void bsad(int *a, int n)
{
    int temp;
    int ifsorted=1;
    for (int i = 0; i < n - 1; i++)
    {
  
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
int abs( int *a, int n,int *p){
    int c=0;
    for (int i = 0; i < n; i++)
    {
       if(a[i]!=p[i])
       {
           c++;
       }
    }
    return c;
}

int main()
{
       int n;
   cout<<"Enter the number of students: ";
   cin>>n;
   int a[n];
   int p[n];
   cout<<"Enter the Height of each student: ";
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
   }
   
  
    bsa(a, n,p);
    bsad(a,n);
    int k=abs(a, n,p);
    cout<<"Mismatches are: "<<k;
    return 0;
}