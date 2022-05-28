#include <stdio.h>
#include<string.h>
typedef union student
{
    int id;
    int marks;
    char fav_char;
    char name[10];
} u;


int main()
{
 u ujjwal,shubham,ravi;

    strcpy(ujjwal.name , "ujjwal");
    strcpy(ravi.name , "ravi");
    strcpy(shubham.name , "shubham");
    ujjwal.id = 3422;
    shubham.id = 2232;
    ravi.id = 323323;
    ujjwal.marks = 34;
    shubham.marks = 22;
    ravi.marks = 32;
    ujjwal.fav_char = 'u';
    shubham.fav_char = 'u';
    ravi.fav_char = 'u';
    printf("Name of the person: %s \n", ujjwal.name);
    printf("id of the person: %d \n", ujjwal.id);
    printf("favourite character of the person:%c\n",ujjwal.fav_char);
    printf("Marks of the person:%d\n",ujjwal.marks);
    printf("---------------------------------------------------------------\n");
    printf("Name of the person: %s \n", ravi.name);
    printf("id of the person: %d \n", ravi.id);
    printf("favourite character of the person:%c\n",ravi.fav_char);
    printf("Marks of the person:%d\n",ravi.marks);
    printf("---------------------------------------------------------------\n");
    printf("Name of the person: %s \n", shubham.name);
    printf("id of the person: %d \n", shubham.id);
    printf("favourite character of the person:%c\n",shubham.fav_char);
    printf("Marks of the person:%d\n",shubham.marks);
    return 0;
}