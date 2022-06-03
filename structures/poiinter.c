#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    int arr[1000]={1,4,65,65,453,5,56,767,54,4,4,4,464,5};
    // int i=0;
 for (int i = 0; i < 15; i++)
 {
     
    printf("printed arrays :%d ",(arr+i));
    printf("printed arrays :%d \n",*(arr+i));

 }
    // printf("printed arrays %d: ",arr[i]);
    // scanf("%d %d", &a, &b);
    // printf("Before swappping\n");
    // printf("value of a is: %d value of b is: %d\n", a, b);
    // swap(&a, &b);
    // printf("After swappping\n");
    // printf("value of a is: %d value of b is: %d\n", a, b);
    return 0;
}