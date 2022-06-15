#include <stdio.h>

int main () {
    int n,a,k;
    printf("Enter the arrays range: ");
    scanf("%d",&n);
    printf("Enter the desired number at first,b ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    k=n+3;
    int arr1[k];
    arr1[0]=arr[0];
    printf("%d",arr1[0]);
    for (int i = 1; i <k; i++)
    {
      if(i==5)
      {
        arr1[i]=
      }     
    }
    
    return 0;
}