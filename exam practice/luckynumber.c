//lucky number containing last digit with number 2,3,9
#include <stdio.h>

int main()
{
    int n, l, r, k;

    printf("Enter the number range l to r: ");
    scanf("%d %d", &l, &r);
    printf("Lucky numbers are: ");
    for (int i = l; i <= r; i++)
    {

        k = i % 10;
        if (k == 2 || k == 3 || k == 9)
        {
            printf("%d ", i);
        }
    }

    return 0;
}