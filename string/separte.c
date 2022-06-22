#include <stdio.h>

int main (int argc, char *argv[]) {
    char str[100];
    gets(str);
    int i=0;
    while (str[i]!='\0')

    {
       printf("%c ",str[i]);
       i++;
    }
    
    return 0;
}