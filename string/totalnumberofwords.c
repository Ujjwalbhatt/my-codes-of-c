#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[100];
    gets(str);
    int i=0;
    int ct=1;
    while (str[i]!='\0')
    

    {
       if(str[i]==32)
       {
        ct++;
       }
        i++;

    }
     printf("%d",ct);

    return 0;
}