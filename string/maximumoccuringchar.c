#include <stdio.h>

int main (int argc, char *argv[]) {
    char str[100];
    gets(str);

   int n= strlen(str);
   for (int i = 0; i < n; i++)
   {
      for (int j = i; j < n-1; j++)
      {
        /* code */
      }
      
   }
   
    return 0;
}