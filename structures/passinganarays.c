#include <stdio.h>
void
int avr(int *arr, int a ){
    int sum=0,avra ;
    for (int i = 0; i < a; i++)
    {
        sum=sum+arr[i];
        
    }
    avra=sum/a;
     
    
}
int main()
{
    int n;
    printf("Enter the range of the arrays");
    scanf("%d", n);
    int arr[n];
    printf("Enter the element of the arrays");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    avr(arr,n);
return 0;

}