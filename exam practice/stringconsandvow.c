#include<stdio.h>
#include<string.h>
#include <ctype.h> 

int main(){
    int n,vow=0,cons=0;
    char ch[100];
    gets(ch);
    int i=0;
    while (ch[i]!='\0')

    {
        tolower(ch[i]);
      
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            vow++;
        }
        else{
            cons++;
        }
        i++;
    }
    printf("The number of vowels in string is : %d \n The number of consonant is string is : %d",vow,cons);
    
return 0;
}