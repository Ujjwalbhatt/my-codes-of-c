/* 1 .Draw a flowchart and also write a C program to create a file “Sample.txt” 
in the current path of the program then accept a paragraph from the user and 
store all the text in the file by removing the articles ‘a’ , ‘an’ , ‘the’ present 
 in it.*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[642];
    char word[162];
    char words[62][216];
    FILE *fp = fopen("sample.txt","w");
    int i = 0;
    int j = 0;
    int k = 0;

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
int ct=0;
   

    for (i = 0; i < k+1; i++)
    {
        if (words[i][j] == 0){

            ct++;
            continue;
        }
        else
            fprintf(fp," %s" ,words[i]);
      

    }
    fclose(fp);
    char str1[100];
    fopen("sample.txt","r");
   
    fscanf (fp,"%[^EOF]s",&str);
    printf("%s ", str);
    fclose(fp);
     printf("%d",ct);

    return 0;
}