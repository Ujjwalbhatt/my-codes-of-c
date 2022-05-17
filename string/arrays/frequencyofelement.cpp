#include<iostream>
using namespace std;

int main()
{
    int arr[1000],i,j,k,a,b,n,c=0;
    cout<<"Enter the range of the arrays";
    cin>>n;
    cout<<"Enter the element of the arrays"<<endl;
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
   
    }
    for (int i = 0; i < n; i++)
    {
        c=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
               c++;
                
            }
            
        }

        if(c>(n/2))
        {
            cout<<"Majority element is: "<<arr[i]<<"And and its frequency is"<<c<<endl;
            break;
        }
        else{
       
            continue;
        }
    }

 
    return 0;
}