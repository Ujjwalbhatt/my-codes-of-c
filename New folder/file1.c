// All consonant in file is replaced by *
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("Student.txt", "r");
   FILE * ptr = fopen("transfer.txt", "w");
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o' || ch=='u')
        {
            fprintf(ptr,"%c",ch);
        }
        else if(ch==32){
            fprintf(ptr," ");
        }
       else{
           fprintf(ptr,"*");
       }
       
    }
    return 0;
}