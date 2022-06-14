#include <stdio.h>
#include<string.h>
int main () {
    char str[1000];
    printf("Enter the string: ");
    gets(str);
    int st=strlen(str);
    for (int i = 0; i < st; i++)
    {
        if (str[i]==' ')
        {
            i=i+1;
            str[i]=str[i]-32;
        }
         
    }
        str[0]=str[0]-32;
    printf("%s",str);
    
    return 0;
}