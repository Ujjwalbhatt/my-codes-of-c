/* 5.Design a structure that stores details of N-items to an inventory such as 
  Item Name, Quantity,and Unit Cost for a certain manufacturing unit. 
  Implement a C program to accept these details. 
  Calculate the total cost of maintaining the inventory of an item by accepting the name. 
  Assume item name to be unique.*/

#include <stdio.h>
#include <string.h>

struct shop{
    char name[30];
    int unit_cost;
    int quantity;

};
int main (int argc, char *argv[]) {
    int n;
    char detail[30];
    int flag=0;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    struct shop s[n];
    printf(".................Enter the item details................. \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the item name: ");
        scanf("%s", &s[i].name);
        printf("Enter the unit cost: ");
        scanf("%d", &s[i].unit_cost);
        printf("Enter the quantity: ");
        scanf("%d", &s[i].quantity);
    }
    printf("Enter the item name to search: ");
    scanf("%s", &detail);
    printf(".................item details................. \n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i].name, detail) == 0)
        {
         printf("Total cost of maintaining the inventory of item %s is %d\n", s[i].name, s[i].unit_cost*s[i].quantity);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Item not found\n");
    }
    return 0;
}