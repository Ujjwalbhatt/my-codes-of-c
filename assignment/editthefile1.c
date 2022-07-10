#include<stdio.h>
 
int main() {
   char str;
   int i = 0;
    FILE *fp;
    fp=fopen("student.txt","w+");
   printf("Enter a multi line string( press Enter and 'ctrl+z' to end input)\n");
   while((str=getchar()) != EOF){
    if (str =='t'){
        continue;
    }
    else
    {
       fputc(str,fp);
    }
    
   }
   

  
   return 0;
}