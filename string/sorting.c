//sort two arrays and merge them
#include <stdio.h>
void sorting(int *ar, int n)
{
    int temp;
    int s;
    for (int i = 0; i < n - 1; i++)
    {
        s = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (ar[j] >= ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
                s = 0;
            }
        }
        if (s == 1)
        {
            return;
        }
    }
}
int main()
{
    int i, j, n, k;

    printf("Enter the range of two arrays");
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[n], arr1[k];
    int t = k + n;
    int arr2[t];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &arr1[i]);
    }
    sorting(arr, n);
    sorting(arr1, k);
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    int c = n;

    for (int i = 0; i < k; i++)
    {

        arr2[c] = arr1[i];
        c++;
    }
    for (int i = 0; i < t; i++)
    {

        printf("%d ", arr2[i]);
    }

    return 0;
}