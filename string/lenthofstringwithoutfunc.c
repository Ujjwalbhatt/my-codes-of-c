#include<stdio.h>

int main(){
    int l=0;
    char chr[50];
   gets(chr);
    for (int i = 0; chr[i] != '\0'; i++)
    {
        l++;
    }
    
    printf("%d",l);
 
return 0;

    
}