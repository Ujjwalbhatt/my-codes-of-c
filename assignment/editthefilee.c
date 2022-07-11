#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, k = 0;
    FILE *fp = fopen("sample.txt", "w");
    char a[100];
    gets(a);
    char b[100][100];
    for (int i = 0; a[i] != '\0'; i++)
    {
        while (a[i] != ' ')

        {
            b[k][j] = a[i];
            j++;
        }
        b[k][j] = '\0';
        k++;
    }
    char *fp = a;
    for (int i = 0; i <= k; i++)
    {
        if (strcmp(b[k], "a") != 0 && strcmp(b[k], "an") != 0 && strcmp(b[k], "the") != 0)
        {
            fputs(b[k],fp);
        }
    }
}