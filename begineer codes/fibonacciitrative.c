#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, result, i;
    printf("Please give an input upto you want to print series : \n");
    scanf("%d", &n);
    printf("Fibonacci Series is:\n");
    for (i = 0; i < n; i++)
    {
        if (i <= 1)

            result = i;

        else   
        {
            result = first + second;
            first = second;
            second = result;
        }
        printf("%d", result);
    }
    return 0;
}
/*
dry run:
input 4:
01
else(2)
r=0+1=1
f=1
s=1

else(3)
r=1+1=2
f=1
s=2

else(4)
r=2+1=3
f=2
s=3
*/