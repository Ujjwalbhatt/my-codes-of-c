#include <stdio.h>
    int c = 1;
int numprint(int num)
{
    if (c<num)
    {

        printf("%d\n", c);
        c=c+1;
        numprint(num);
    }
}
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter the number of natural you want to print");
    scanf("%d", &i);
    printf("%d", numprint(i));
    return 0;
}
