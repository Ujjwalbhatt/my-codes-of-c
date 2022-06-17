#include <stdio.h>

int main () {
    int a1=0,a2=0,n;
    printf("enter the string range: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Element of the arrays in: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>a1){
            a2=a1;
            a1=arr[i];
        }
        else if(arr[i]>a2&&arr[i]<a1){
            a2=arr[i];
        }
    }
    printf("Second largest number is : %d",a2);
     
    return 0;
}