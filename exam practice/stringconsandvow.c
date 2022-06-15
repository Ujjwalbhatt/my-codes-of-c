#include<stdio.h>
#include<string.h>
#include <ctype.h> 

int main(){
    int n,vow=0,cons=0;
    char ch[100];
    gets(ch);
    int i=0;
      strlwr(ch);
    while (ch[i]!='\0')

    {
      
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
         ch[i]=tolower(ch[i]);
        }
        else{
          ch[i] = toupper(ch[i]);
        }
        i++;
    }
  printf("%s",ch);
    
return 0;
}