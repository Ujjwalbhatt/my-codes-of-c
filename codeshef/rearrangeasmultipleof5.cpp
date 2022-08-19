#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        char c;
        int flag=0;
        for(int i=0;i<d;i++)
        {
            cin>>c;
            if(c=='0' || c=='5')
            flag=1;
        }
        if(flag==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}