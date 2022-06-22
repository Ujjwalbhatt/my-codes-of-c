#include <stdio.h>
#include<string.h>
int main (int argc, char *argv[]) {
    char str[100];
    char sstr[100];
    printf("Enter the string: ");
    gets(str);
    int s=strlen(str);
    printf("Enter the substring: ");
    gets(sstr);
    int ss=strlen(sstr);
    int i=0;
    int c=0;
    if (s==ss)
    {
    while (str[i]!='\0')

    {
       if(str[i]==sstr[i]){
        i++;
       }
       else{
        c=1;
        i++;
       }
    }
    if (c==1)
    {
       printf("Not matched");
    }
    else{
        printf("matched");
    }
        
    }
    else{
        printf("Not matched");
    }
    
    return 0;
}