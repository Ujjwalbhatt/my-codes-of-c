#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}


int main()
{
    int c;
    int d;
    printf("Enter the number you want the factorial of \n");
    scanf("%d", &c);

    printf("The factorial of %d is %d", c, factorial(c));

    return 0;
}
/*
dry run:
5 * factorial(4);
5 * 4 * factorial(3);
5 * 4 * 3 * factorial(2);
5 * 4 * 3 * 2 * factorial(1);
5 * 4 * 3 * 2 * 1;
output:
120
*/
