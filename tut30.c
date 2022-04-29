#include <stdio.h>
void tripat()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void revtripat()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
// void pyramid()
// {
//     int c,h
//     c=
// }
int main()
{
    int i, j;
    while (1)
    {

        printf("Enter 0 for triangular pattern and 1 for reversed triangular pattern and 2 to exit:");
        scanf("%d", &i);
        if (i == 0)
        {
            tripat();
        }
        else if (i == 1)
        {
            revtripat();
        }
        else if (i == 2)
        {
            printf("quitting the programme!");
            goto end;
        }
        else
        {
            printf("Wrong input!");
        }
    }
end:
    return 0;
}