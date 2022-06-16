#include <stdio.h>

int main (int argc, char *argv[]) {
    int n,min,x;
    printf("Enter the range of the arrays: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value you want to find: ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        
    scanf("%d",&arr[i]);

    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x)
        {
            min=arr[i];
            break;

        }
    }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]>x&&arr[i]<min)
            {
                min=arr[i];
            }
            
        }
        printf("%d",min);
    
    
    return 0;
}