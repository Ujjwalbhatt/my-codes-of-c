#include <stdio.h>
int main(){
    double BP,HRA,TA,NS,DA;
    printf("Enter basic pay:");
    scanf("%lf",&BP);
    HRA=(10*BP)/100;
    TA=(5*BP)/100;
    DA=(15*BP)/100;
    NS=BP+HRA+TA+DA;
    printf("Net salary is:%0.2lf",NS);
    return 0;
}
