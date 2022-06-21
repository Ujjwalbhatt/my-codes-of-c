#include <stdio.h>
#include<string.h>
// #include<stdlib.h>
int main(){


char mainstring[50]="r prince  is      a     goodboy";
char substring[30]="rp";
char * result;
result=strstr(mainstring,substring);
if(result){
    printf("substring exixts");
}
else{jhbuyh
    printf("invalid");
}

    return 0;
}