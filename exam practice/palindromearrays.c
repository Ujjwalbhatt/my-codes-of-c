// check wheather the arrays is palindrome or not
#include <stdio.h>
int main()
{
    int flag = 0, n;
    printf("Enter the range of the arrays: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
    }

    for (int i = 0; i <= n / 2 && n != 0; i++)
    {

        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Not a palindrome");
    else

        printf("palindrome");
    return 0;
}