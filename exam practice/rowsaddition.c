#include <stdio.h>

int main () {
    int a,b;
int sum=0;
    printf("Enter the rows and columns arrays: ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Enter the element of the arrays: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int j = 0; j < b; j++)
    {
            sum=0;
        for (int i = 0; i < b; i++)
        {
        sum=sum+arr[i][j];
        }
            printf("%d ",sum);
        
    }
    
    
    return 0;
}
