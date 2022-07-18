/* 2.Draw a flowchart and also write a C program to open a file “Dump.txt” 
assuming it in the current path of the program then  read last 50 bytes 
from it into a buffer and then transfer the content back to the same file 
by replacing all the spaces between the words by the ‘$’ character.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 
    char str1[100];
    char str[1000];
    int last;
    int t=0;
    FILE *fp = fopen("dumb.txt","r");
     fgets(str,1000,fp);
    fseek(fp,-3,SEEK_END);
    printf("%d",ftell (fp));
    last=ftell(fp)+1;
    
    int n=last-50-1;
    if (n<0)
    {
        n=0;
    }
    
    
    fseek(fp, n, SEEK_SET);
    fgets(str1,last,fp);
   int  i=0;
    while (str1[i] != '\0')
    {
        if (str1[i]== 32)
        {
            str1[i]= '$';
        }
        i++;
    }
    printf("%s",str1);
    fclose(fp);
    
  fp= fopen("dumb.txt","w");
   fprintf(fp,"%s",str);
   fseek(fp, n, SEEK_SET);
   fputs (str1,fp);
   fclose(fp);
   
   
    return 0;
}