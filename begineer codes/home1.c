#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter the number whose table you want to print:\n");
    scanf("%d",&i);

    printf("table of %d is :\n",i);
    for (j = 1; j <= 10; j++)
    {

        printf("%d x %d = %d\n" ,i,j,i*j);
    }
    return 0;
}
