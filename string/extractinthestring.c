#include <stdio.h>

int main (int argc, char *argv[]) {
    int k,n;
    char str[100];
    char sst[100];
    gets(str);
   int g=0;
    scanf("%d %d",&k,&n);
    for (int i = k; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
        }
        
        sst[g]=str[i];
        g++;
    }
    printf("%s",sst);
    return 0;
}