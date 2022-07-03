#include <stdio.h>

int main (int argc, char *argv[]) {
    int n,ct=0;
    printf("Enter the range of the arrays: ");
    scanf("%d",&n);
    int arr[n];
    int multi[n];
    printf("Enter the value of arrays: ");
    for (int i = 0; i < n; i++)
    {
         scanf("%d",&arr[i]);

    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%7==0){
              multi[ct]=arr[i];
              ct++;
        }
        else if(arr[i]%11==0){
            multi[ct]=arr[i];
            ct++;
        }
    }
    for (int i = 0; i < ct; i++)
    {
        printf("%d ",multi[i]);
    }
    
    
    return 0;
}