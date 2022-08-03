/* Write a C code to input a string in a file and print it in reverse order.
(without using fgets( ))
Example:
File content: Hi how are you ?
Output ?uoy era who iH */
#include<stdio.h>
int main(){
    FILE *fp=fopen("sun.txt","w+");
    char ch,n,i=0;
    printf("Enter the string\n");
    while((ch=getchar())!='\n'){
        fputc(ch,fp);
    }
   fseek(fp,0,SEEK_END);
   n=ftell(fp);
   while (i<n)
   {
    i++;
    fseek(fp,-i,SEEK_END);
    printf("%c",fgetc(fp));
   }
   fclose(fp);
    return 0;

}