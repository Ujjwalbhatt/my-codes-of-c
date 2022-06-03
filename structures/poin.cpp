#include<stdio.h>
void swap(int *a, int *b){
a=b;
printf("%d %d",a,b);
*a=15;
// *b=10;
}
    int x=10,y=20;
int main() {
    
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;

}
// dry run
/*

*/
