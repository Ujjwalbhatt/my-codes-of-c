// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
            for (int j = 5; j >= i; j--)
            {
                printf("* ");
            }
            printf("\n");
    }
    return 0;
}