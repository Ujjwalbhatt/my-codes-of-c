#include <stdio.h>
int main()
{
    int a[10000], n, i;
    
    printf("Enter the number to convert: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}

/*
dry run:
input 20:
output:
a[0]=20%2=0
n=10
a[1]=10%2=0
n=5
a[2]=5%2=1
n=2.5
n[3]=2.5%2=0
n=1.5






*/