#include <stdio.h>
#include<string.h>

int main(){


char mainstring[50]="prince is a goodboy";
char substring[30]="prince";
char * result;
result=strstr(mainstring,substring);
if(result){
    printf("substring exixts");
}
else{
    printf("invalid");
}

    return 0;
}