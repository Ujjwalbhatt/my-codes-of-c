// Armstrong number in  c
// 371
// (3^3+7^3+1^3)=371
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int sum = 0;
    int t;
    printf("Enter the number to check if it is armstrong: ");
    scanf("%d", &n);
    int temp = n;
    int k = 0;
    while (n > 0)
    {
        t = n % 10;
        n = n / 10;
        k++;
    }

    n = temp;
    while (n > 0)
    {
        t = n % 10;
        sum = sum + pow(t, k);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("armstrong number!");
    }
    else
    {
        printf("Not an armstrong!");
    }
}