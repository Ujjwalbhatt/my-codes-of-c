#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{   
    char chr[50];
    scanf("%s",&chr);
    for (int i = 0; i < strlen(chr); i++)
    {
        printf("%c ",chr[i]);

    }
    
  
    
    return 0;
}