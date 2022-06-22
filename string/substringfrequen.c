#include <stdio.h>

int main (int argc, char *argv[]) {
    char str[100];
    gets(str);
    char sstr[100];;
    gets(sstr);
    
    int temp=0,count=0,i=0, a=0;
    while (str[i]!=' ')
    {
        if (str[i]==sstr[i])
        {
            temp++;
        }
        i++;
        
    }
    
    while (str[i]!='\0')
    {
        if (str[i]==' ')
        { 
           if (str[i]==sstr[i])
           {
            count++;
           }
           
        }
        i++;
        
    }
    a=temp+count;
    printf("The frequency of the word %s in a string is %d",sstr,a);
    return 0;
}