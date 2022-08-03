//concatenating the 3 string
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];
    int k = 0, i = 0, l1, l2, l3;
    gets(str1);
    gets(str2);
    gets(str3);
    l1 = strlen(str1);
    l2 = strlen(str2);
    l3 = strlen(str3);
    while (str1[i] != '\0')
    {
        str4[k] = str1[i];
        k++;
        i++;
    }
    str4[k] = 32;
    k++;
    i = 0;
    while (str2[i] != '\0')
    {
        str4[k] = str2[i];
        k++;
        i++;
    }
    str4[k] = 32;
    k++;
    i = 0;
    while (str3[i] != '\0')
    {
        str4[k] = str3[i];
        k++;
        i++;
    }
    str4[k] = '\0';

    printf("%s", str4);

    return 0;
}