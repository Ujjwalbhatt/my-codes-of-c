#include <stdio.h>

int main (int argc, char *argv[]) {
    int n;
    printf("Enter the range of the arrays: ");
    scanf("%d",&n);
    int arr[n];
    int k=n/2;
    int odd[k];
    int even[k];
    int e=0;
    int o=0;
    printf("Enter the value of arrays: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            even[e]=arr[i];
            e++;
        }
        else{
            odd[o]=arr[i];
            o++;
        }
    }
    printf("Even \t| Odd \n");
    for (int i = 0; i < k; i++)
    {
        printf(" %d\t| %d \n",even[i],odd[i]);
       
        
    }
    
    
    return 0;
}