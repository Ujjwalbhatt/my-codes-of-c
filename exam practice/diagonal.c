#include <stdio.h>
void interchange(int k,int n,int arr[k][n]){
    int temp=0;
    
for (int i = 0; i < n; i++)
        {
            temp = arr[i][i];
            arr[i][i] = arr[i][n - i - 1];
            arr[i][n - i - 1] = temp;
        }
}
int main()
{
    int n, k, i, j, temp;
    printf("Enter the size of N x N matrix : ");
    scanf("%d %d", &k, &n);
    int arr[k][n];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (k == n)
    {
        interchange(k,n,arr);
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
            
        }
        
    }
    else
    printf("Not a square matrix");

    return 0;
}