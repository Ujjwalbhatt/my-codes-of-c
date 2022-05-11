#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void main()
{
    char str[100];
    int i, wrd;

    fgets(str, sizeof str, stdin);

    i = 0;
    wrd = 1;

    while (str[i] != '\0')
    {

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            wrd++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", wrd - 1);
}