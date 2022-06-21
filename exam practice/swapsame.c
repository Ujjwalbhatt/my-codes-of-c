#include <stdio.h>

int main (int argc, char *argv[]) {
    int n,k;
    int temp=0;
    scanf("%d %d",&n,&k);
    int arr[n], arr2[k];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&arr[i],&arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr2[i]){
           temp= arr[i];
           arr[i]=arr2[i];
           arr2[i]=temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d <--> %d \n",arr[i],arr2[i]);
    }
    
    return 0;
}