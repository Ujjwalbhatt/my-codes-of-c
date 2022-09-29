#include <stdio.h>
int digit(int num1)
{
   static int ct = 0;
    if (num1 != 0)
    {
        ct++;
        digit(num1 / 10);
    }

    return ct;
}
int main()
{
    int num;
    int result;
    printf("Enter the number: ");
    scanf("%d", &num);
    result = digit(num);
    printf("The digit of the number is: %d", result);
    return 0;
}
