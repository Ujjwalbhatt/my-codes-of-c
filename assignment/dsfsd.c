#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];

    printf("Enter the string: ");
    gets(str);

    printf("%s",str);
    return 0;
}