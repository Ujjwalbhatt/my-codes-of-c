#include <stdio.h>
int main()
{
    int res, a, b;
    printf("Enter 1 for burger \n Enter 2 for pizza \n Enter 3 for sandwich \n Enter 4 for french fries: ");
    scanf("%d", &b);
    printf("Enter the quanity to buy");
    scanf("%d", &a);
    switch (b)
    {
    case 1:
        res = a * 50;
        printf("your bill:%d", res);
        break;
    case 2:
        res = a * 150;
        printf("your bill:%d", res);
        break;
    case 3:
        res = a * 40;
        printf("your bill:%d", res);
        break;
    case 4:
        res = a * 30;
        printf("your bill:%d", res);
        break;

    default:
    printf("Invalid input !");
        break;
        
    }
    return 0;
}