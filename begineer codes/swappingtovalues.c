#include <stdio.h>
int main(){
    int A, B;
    printf("Enter the value of A & B:");
    scanf("%d%d",&A,&B);
    printf("value before swap A:%d & B:%d", A, B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("\nvalue after swap A:%d & B:%d ", A, B);
    return 0;
}


