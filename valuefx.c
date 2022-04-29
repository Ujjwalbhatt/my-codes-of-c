#include <stdio.h>
int main(){
    int x, fx;
    printf("enter the value of x:");
    scanf("%d", &x);
    if (0 <= x && x<= 10){
        fx = (x * x) + 2;
        printf("value of f(x):%d\n", fx);}
    else if (11 <= x && x<= 20) {
        fx = (x * x) + (2 * x);
        printf("value of f(x):%d\n", fx);}
    else if (21 <= x && x <= 30){
        fx = (x * x * x) + (2 * 2);
        printf("value of f(x):%d\n", fx);}
    else{
        fx = 0;
        printf("value of f(x):%d\n", fx);}
    return 0;
}
