#include<stdio.h>
#include<string.h>


int main()
{
    char ch[100];
    char ch2[100];
    gets(ch);
    printf("The first string is: %s \n",ch);
    gets(ch2);
    printf("The second string is: %s \n",ch2);

    int res=strcmp(ch,ch2);
    printf("The concatenated string is: %d \n ",res);
    if (res==0)
    {
        printf("Both strings are equal");

    }
    else{
        printf("Both strings are not equal");
    }
    
    return 0;
}