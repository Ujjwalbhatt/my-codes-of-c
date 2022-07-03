#include <stdio.h>
#include <string.h>
void palindrome(char *ch, char *rch,int n){
    int j=0;
    int i;
    
       for(  i=n-1;i>=0;i--){
          rch[j++]=ch[i];
          
       }
        	rch[j] = '\0';
}
int main () { 
    char ch[100];
    char rch[100];
    int flag=0;
    printf("Enter the string: ");
    gets(ch);
    int n=strlen(ch);
    printf("%d\n",n);
    palindrome(ch,rch,n);
    printf("%s\n",rch);
    printf("%s",ch);
   for (int i = 0; i < n; i++)
   {
       if(ch[i]!=rch[i]){
        flag=1;
       }
   }
   if(flag==1){
    printf("string is not palindrome");
    
   }
    else{
        printf("string is the palindrome");
    }
    return 0;
}