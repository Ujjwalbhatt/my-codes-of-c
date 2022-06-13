#include <stdio.h>

int main()
{
    int k, n, temp;
    printf("Enter the range of the arrys: ");

    scanf("%d", &n);
    int arr[n];
    printf("Enter the kth element to which you want to find the smallest element in the arrays: ");
    scanf("%d", &k);
    
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
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The kth smallest element in the arrys is : %d",arr[k-1]);


    return 0;
}