#include <stdio.h>
int main()
{
    int n, i, m = 0, c = 0, flag = 0;
    printf("Enter the number to check prime:");
    scanf("%d", &n);
    arr[n];
    for (i = 0; i < n; i++)
    {
        c = 0;
        m = sqrt(arr[i]);
        for (int i = 2; i < arr[i]; i++)
        {
            if (arr[i] % 2 == 0)
            {
                c = 1;
                break;
            }
        }
if (c==0)
{
    printf("%d is a prime number", arr[i]);
}
else
{
    printf("%d is not a prime number", arr[i]);
}
    }
    return 0;
}

    