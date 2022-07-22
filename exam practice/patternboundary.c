#include <stdio.h>

int main (int argc, char *argv[]) {
    int n,k,sum=0,g,b;

    printf("Enter the rows and coloumns of 2d arrays: ");
    scanf("%d %d",&n,&k);
    int arr[n][k];
    printf("Enter the vlalues of the arrays: \n");
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
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
                 printf("%d ",arr[i][j]);
                 sum=sum+arr[i][j];
            }
            else{
            printf("  ");
            } 
        }
        printf("\n");
    }
    printf("\n%d", sum);
    return 0;
}