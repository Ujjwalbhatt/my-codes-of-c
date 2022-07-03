#include <stdio.h>
int matrix(int m, int array[m][m])
{
    int a = 0, b = 0, i = 0;
    for (i = 0; i < m; ++i)

    {

        a = a + array[i][i];

        b = b + array[i][m - i - 1];
    }
    int sum = a + b;
    return sum;
}
int main()

{

    int i, j, m, n;

    printf("Enetr the order of the matix \n");

    scanf("%d %d", &m, &n);
    int array[m][n];

    printf("Enter the co-efficients of the matrix\n");

    for (i = 0; i < m; ++i)

    {

        for (j = 0; j < n; ++j)

        {

            scanf("%d",  &array[i][j]);
        }
    }

    int sum = matrix(m, array);

    printf("\nThe sum of the diagonal elements is = %d\n", sum);

    return 0;
}