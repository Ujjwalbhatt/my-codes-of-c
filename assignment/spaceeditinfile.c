#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[642];
 
    FILE *fp = fopen("dumb.txt","w+");
    int i = 0;
    int j = 0;
    int k = 0;
    fseek(fp,,SEEK_END);
    fputs("sonoo jaiswal", fp);
    return 0;
}