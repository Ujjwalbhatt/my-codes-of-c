#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char chr;
    printf("Enter the string: ");
    gets(str);
    int n=strlen(str);
    printf("Enter the special character: ");
    scanf("%c",&chr);
    for (int i = 0; i < n; i++)
    {
        if(str[i]==32){
            str[i]=chr;
        }
    }
   

        printf("%s",str);
 
    
    return 0;
}