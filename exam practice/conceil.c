#include <stdio.h>

int main()
{
    int arr[100], n, k, x, t;
    printf("Enter the range arrays");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            t = i;
        }
    }

    printf("ceil: %d", arr[t + 1]);
    printf("floor: %d", arr[t - 1]);

    return 0;
}