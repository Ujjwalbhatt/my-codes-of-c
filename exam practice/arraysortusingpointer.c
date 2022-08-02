#include <stdio.h>
void sort(int n, int *arr)
{
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                max = *(arr + j + 1);
                *(arr + j + 1) = *(arr + j);
                *(arr + j) = max;
            }
        }
    }
}
int main(int argc, char *argv[])
{
    int arr[100];
    int n;
    scanf("%d", &n);
    printf("Enter the arrays element: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Arrays before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sort(n, arr);
    printf("Arrays after sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}