#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char sstr[100];
    int k=0,count=0;
    printf("Input string: ");
    gets(str);
    int len1 = strlen(str);
    printf("Input  substring: ");
    gets(sstr);
    int len2 = strlen(sstr);
    for (int i = 0; i < len1; i++)
    {
        while (str[k]==sstr[i])
         {
             k++;
         }
       if(k==len2){
           count++;
           k=0;
       }
           
    }
   printf("The frequency of substring is : %d ",count);
    return 0;
