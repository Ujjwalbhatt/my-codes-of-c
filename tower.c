#include <stdio.h>
void TOH(int n, char x, char y, char z)
{
    if (n > 0)
    {
        TOH(n - 1, x, z, y);
        printf("\n%c to %c", x, y);
        TOH(n - 1, z, y, x);
    }
}
/*
Dry run for hanoi tower number 3:
A TO B
A TO C


*/

int main()
{
    int n;
printf("Enter the number of disk to be moved");
scanf("%d" ,&n);
    TOH(n, 'A', 'B', 'C');
}