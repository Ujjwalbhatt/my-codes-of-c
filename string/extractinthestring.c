#include <stdio.h>
void extract(char *str, char *sst){
     int k,n,g=0;
    scanf("%d %d",&k,&n);
     for (int i = k; i <= n; i++)
    {
      
        
        sst[g]=str[i];
        g++;
    }
    str[g]='\0';
}
int main (int argc, char *argv[]) {
 
    char str[100];
    char sst[100];
    gets(str);
   int g=0;
extract(str, sst);
    printf("%s",sst);
    return 0;
}