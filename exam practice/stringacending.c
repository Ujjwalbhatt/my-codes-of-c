#include <stdio.h>
#include <string.h>
void sortc(int n, char *str)
{
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
           int j=i;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
            n--;
            
        }
    }
    printf("%s \n", str);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=str[j];

            }
        }
        
    }
    
}
int main()
{
    char str[1000];
    gets(str);
    int n = strlen(str);
    sortc(n, str);

    return 0;
}