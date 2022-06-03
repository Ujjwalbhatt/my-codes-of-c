#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    char ch2[100];
    gets(ch);
    printf("The first string is: %s \n", ch);
    // gets(ch2);
    // printf("The second string is: %s \n",ch2);
    int len = strlen(ch);
    int i=0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {

            ch[i]=ch[i]+32;
        }
        else
        {
            ch[i]=ch[i]-32; 
        }
        i++;
    }

    printf("The concatenated string is: %s \n ", ch);

    return 0;
}