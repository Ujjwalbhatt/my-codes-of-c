#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char sstr[1000];
    char str1[100][100];
    int i = 0, j = 0, k = 0;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the substring to find frequency of: ");
    gets(sstr);

    while (str[i] != '\0')
    {
        if (str[i] == 32)
        {
            str1[k][j] = '\0';
            k++;
            j = 0;
            

        }
        else
        {

            str1[k][j] = str[i];
            j++;
        }
        i++;
    }
    str1[k][j] = '\0';
    int ct = 0;
    
    for (int i = 0; i < k + 1; i++)
    {
        if (strcmp(str1[i], sstr) == 0)
        {
            
            ct++;                      
        }
    }
   
    printf("%d", ct);

    return 0;
}