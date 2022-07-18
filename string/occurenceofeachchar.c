#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, k, count = 0, n;
    gets(str);
    for (int j = 0; str[j]; j++)
    {
        n = j;
    }
    printf("Occurence if wach character in string : \n");
    for (int i = 0; i < n; i++)
    {
        count = 1;
        if (str[i])
        {
            for (int j = i + 1; j < n; j++)
            {

                if (str[i] == str[j])
                {
                    count++;
                }
                str[j] = '\0';
            }
        printf("%c = %d time \n", str[i], count);
        }
    }
return 0;
}

