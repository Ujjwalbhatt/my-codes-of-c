#include<iostream>
// #include<iomanip>
using namespace std;
bool dup(int *nums)
{
    int i,j;
    int c=0;
    for(int i=0;i<10;i++)
    {
            cout<<"pass: "<<i<<endl;
        for (int j = i+1; j < 10; j++)
        {
            if (nums[i]==nums[j])
            {
           c++;
           return true;
            }
         
            
        }
          
        
    }
    if(c==0){
        return false;
    }
}
int main()
{
    int nums[10]={0,0,2,1,5,4,9,6,7,8};
    
    int i,j,k,n;
    bool c=dup(nums);
      if(c==true)
      {
          cout<<"true";

      }
      else{
          cout<<"false";
      }
    return  0;
}