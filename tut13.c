#include <stdio.h>
int main()
{
    int num;
    int index = 0;
    printf("Enter a number \n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index+1);
        index = index + 1;
    } while (index < num);

    return 0;
}
