#include<stdio.h>

int sum_of_four(int a, int b, int c, int d) {
    	int sum = 0;
        sum += a;
        sum += b;
        sum += c;
        sum += d;
        return sum;
    }
int main(){
    int c;

int t=sum_of_four(4,5,6,7);
printf("%d",t);



}


