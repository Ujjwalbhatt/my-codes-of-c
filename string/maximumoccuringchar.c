#include <stdio.h>
#include<string.h>
int main (int argc, char *argv[]) {
    char str[100];
    gets(str);

   int n= strlen(str);
   int ct=0;
   int lt=0;
   for (int i = 0; i < n; i++)
   {
      for (int j = ; j < n; j++)
      {
        if (str[i]==str[j])
        {
            lt++;
        }
        if (ct<lt)
        {
            ct=lt;
            lt=0;
        }
        
      }
      
   }
   printf("%d",ct);
   
    return 0;
}