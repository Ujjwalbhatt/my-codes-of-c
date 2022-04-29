#include <stdio.h>
int main()
{
    int marks[4][4] = {{2, 6, 7, 8}, {2, 4, 3, 4}, {3, 5, 5, 6}, {6, 7, 7, 8}};
    //    for (int  i = 1; i <= 4; i++)
    //    {
    //        printf("Enter the value of %d element of the arrays\n",i);
    //        scanf("%d",&marks[i]);
    //    }
    // printf("The values of the arrays you have given are:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
