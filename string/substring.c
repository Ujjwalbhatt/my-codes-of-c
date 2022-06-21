#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    char str[1000];
    char sstr[100];
    int k=0,count=0;
    printf("Input string: ");
    gets(str);
    int len1 = strlen(str);
    printf("Input  substring: ");
    gets(sstr);
    int len2 = strlen(sstr);
    int *i=strstr(str,sstr);
    printf("%d",i);


    return 0;
}