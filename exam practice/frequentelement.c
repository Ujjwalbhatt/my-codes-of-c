#include <stdio.h>
#include<string.h>

int main (int argc, char *argv[]) {
    char str[100];
    char maxrepeatedchar[256];
    int count=0;
    int maxcount=0;
    printf("Enter the string : ");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        count = 0;
        for (int j = 0; j < strlen(str); j++)
        {
          if (str[i]==str[j])
          {
            count++;
          }
             
        }
       if (maxcount<count)
       {
         maxcount=count;
         maxrepeatedchar[i]=str[i];
       }
       
        
    }
    printf("The char %s has been repeated maximum of %d times",maxrepeatedchar,maxcount);
    return 0;
}