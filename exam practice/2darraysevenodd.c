#include <stdio.h>
int oddeven(int b){
   
   if(b%2==0){
       return 1;
   }
   else
   return 0;
}
int main () {
    int n,k,sum=0,g,b;

    printf("Enter the rows and coloumns of 2d arrays: ");
    scanf("%d %d",&n,&k);
    int arr[n][k];
    printf("Enter the vlalues of the arrays: \n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int b=arr[i][j];
            g= oddeven(b);
           
            if(g==1){
              
                sum=sum+arr[i][j];
            }
            
        }
        
    }
    printf("%d is the sum of evene numbers present in the arrays",sum);
    
    return 0;
}