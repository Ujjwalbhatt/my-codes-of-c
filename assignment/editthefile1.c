#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void palindrome()

int main()
{
    char str[642];
    char word[162];
    char words[62][216];
    FILE *fp = fopen("sample.txt","w");
    int i = 0;
    int j = 0;
    int k = 0;
    int l1 = 0;
    int l2 = 0;

    printf("Enter string: ");
    scanf("%[^;]s", str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {                                         
            words[k][j] = '\0';
            k++;
            j = 0;
        }
       else if (str[i] == '\n')
        {                                         
            words[k][j] = '\n';
            words[k][j+1] = '\0';
            k++;
            j = 0;
        }
        else
        {
            words[k][j] = str[i];
            j++;
        }
        i++;
    }
    words[k][j] = '\0';

    j = 0;
    for (i = 0; i < k+1 ; i++)
    {
        if (strcmp(words[i], "the") == 0 ||strcmp(words[i], "a") == 0 || strcmp(words[i], "an") == 0)
            words[i][j] = 0;
    }

    j = 0;

    for (i = 0; i < k+1; i++)
    {
        if (words[i][j] == 0)
            continue;
        else
            fprintf(fp," %s" ,words[i]);
      

    }
    fclose(fp);
    char str1[100];
    fopen("sample.txt","r");
 
    fscanf (fp,"%[^EOF]s",str1);
    printf("%s ", str1);
    fclose(fp);
    
    return 0;
}