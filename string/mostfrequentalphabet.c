#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    int n=strlen(str);
    int arr[26];
    int ascaii;
    for (int i = 0; i < 26; i++)
    {
        arr[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        if(str[i]== ' '){
            continue;
        }
        else{
            ascaii=str[i]-'a';
            arr[ascaii]++;
        }
    }
    int max=arr[0];
    
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];

        }
        
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]==max ){
            printf("%c ", (char)(i+97) );
            break;
        }
    }
    


        return 0;
}