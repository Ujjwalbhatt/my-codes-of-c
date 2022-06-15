#include <stdio.h>
void insert(int* arr, int n,int k,int t,int* arr1,int g){
   int c=k+1;
   for (int i = 0; i < k; i++)
   {
     arr1[i]=arr[i];
   }
    for (int i = k; i < g; i++)
    {
       arr1[c]=arr[i];
       c++;
    }
    arr1[k]=t;
}
int main () {
    int n,k,t;
    printf("Enter the range of the arrays: ");
    scanf("%d",&n);
    printf("Enter the index to what you want to replace the element: ");
    scanf("%d",&k);
    printf("Enter the value you want to replace with in the arrays: ");
    scanf("%d",&t);
    int arr[n];
    int g=n+1;
    int arr1[g];
    printf("Enter the elements of the arrays: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    insert(arr,n,k,t,arr1,g);
    for (int i = 0; i < g; i++)
    {
        printf("%d ",arr1[i]);
    }
    
    return 0;
}
