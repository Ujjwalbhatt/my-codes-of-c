/*Q4. Develop a program test whether a given matrix is an upper - 
triangular matrix or not.*/

#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, i, j, k, flag = 0;
    printf("Enter the range of both rows and columns: ");
    scanf("%d %d", &n, &k);
    int arr[n][k];
    printf("Enter the matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("Upper triangular matrix");
    }
    else
    {
        printf("Not an upper triangular matrix");
    }
    return 0;
}