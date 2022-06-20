#include <stdio.h>

int main () {
    int a,b;
int sum=0;
    printf("Enter the rows and columns arrays: ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int summ[a];
    printf("Enter the element of the arrays: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        sum=0;
        for (int j = 0; j < b; j++)
        {
            sum=sum+arr[i][j];
        }
           summ[i]=sum;
        
    }
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d   ",arr[i][j]);
        }
        printf(" |  %d \n",summ[i]);
        
    }
    
    return 0;
}
