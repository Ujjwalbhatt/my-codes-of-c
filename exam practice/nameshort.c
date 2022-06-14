#include <stdio.h>

int main () {
    char name[1000],middle[1000],surname[1000];
    int i=0;
    printf("Enter the name of the person with first name and middle name and surname: ");
    scanf("%s %s %s",name,middle,surname);
    printf("full name: %s %s %s \n",name,middle,surname);
    printf("Short form: %c.%c %s",name[0],middle[0],surname);
    return 0;
}