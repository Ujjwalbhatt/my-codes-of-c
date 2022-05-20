#include<iostream>
using namespace std;

int main()
{
    int nums[4]={2,7,3,1};
    bool a;
    int i,j,k,n;
    for(int i=0;i<4;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (nums[i]==nums[j])
            {
               
                goto end;
            }
            else{
                continue;
            }
            
        }
          
        
    }
       end:
       {
           cout<<"True";
       }
    return  0;
}