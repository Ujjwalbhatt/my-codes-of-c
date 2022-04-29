#include <stdio.h>
int main()
{
    // char a='3';
    // char *ptra = &a;
    // ptra++;
    // // ptra--;
    // printf("%d\n", ptra);
    // printf("%d", ptra+2);
    int arr[]={123,2,3,4,5,6,7};
    // int* arrayptr = arr;
    printf("array at the position 3 of the array is %d\n", arr[3]);
    printf("the address of the first element of the arrays is %d \n", &arr[0]);
    printf("the address of the first element of the arrays is %d \n", arr);
    printf("the address of the second element of the arrays is %d \n", &arr[1]);
    printf("the address of the second element of the arrays is %d \n", arr+1);
    // arr--; This will throw an error
 
    printf("the value at address of the first element of the arrays is %d \n", *(&arr[0]));
    printf("the value at address of the first element of the arrays is %d \n", *(arr));
    printf("the value at address of the second element of the arrays is %d \n", *(&arr[1]));
    printf("the value at address of the second element of the arrays is %d \n", *(arr+1));
    
   

    return 0;
} 