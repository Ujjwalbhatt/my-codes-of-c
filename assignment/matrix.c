#include <stdio.h>
int main()
{
    int m, n, i, j, b[10][10], t[10][10];
    printf("Enter rows and columns :\n");
    scanf("%d %d", &m, &n);
    printf("Enter elements of the matrix \n");
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {

            t[j][i] = b[i][j];
        }
    }
    printf("Transpose of the matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}