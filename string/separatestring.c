#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{   
    char chr[50];
    scanf("%s",&chr);

    for (int i = strlen(chr); 0<=i; i--)
    {
        printf("%c ",chr[i-1]);

    }
    
  
    
    return 0;
}