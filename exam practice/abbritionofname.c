#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int n, a;
    printf("Enter the name of the person: ");
    gets(ch);
    n = strlen(ch);
    printf("%c.", ch[0]);
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ' ')

        {
            a = i;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (ch[i]==' ')
        {
            printf("%c.",ch[i+1]);
           
        }
        
    }
    for (int i = a+1; i < n; i++)
    {
         printf("%c",ch[i]);
    }
  
    return 0;
}