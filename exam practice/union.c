#include <stdio.h>

void Union(int *arr,int *arr1,int *arr2, int n,int k,int g){
    int j=0;
    for (int i = 0; i < n; i++)
    {
           arr2[j]=arr[i];
           j++;
    }
    for (int i = 0; i < k; i++)
    {
           arr2[j]=arr1[i];
           j++;
    }
    
}
int main(int argc, char *argv[])
{
    int n, k;
    printf("Enter the range of the both arrays: ");
    scanf("%d %d", &n, &k);
    int arr[n];
    int arr1[k];
    int g=n+k;
    int arr2[g];
    printf("Enter the element of the arrays 1 : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element of the arrays 2 : ");

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &arr1[i]);
    }
    Union(arr,arr1,arr2,n,k,g);
    for (int i = 0; i < g; i++) 
    {
        printf("%d ",arr2[i]);
    }
    

    return 0;
}