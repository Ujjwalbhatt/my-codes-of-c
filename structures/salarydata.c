#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int roll;
    char name[100];
    struct marks 
    {
        int math;
        int english;
        int physics;
    }mark;
};
int main()
{
    int n;
    printf("Enter the range of the student: ");
    scanf("%d", &n);
    struct student s[n];
    printf("Enter the student details: \n");
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the name of the student %d : ", i);
        scanf("%s",s[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d",&s[i].roll);
        printf("Enter the marks of the student in math: ");
        scanf("%d",&s[i].mark.math);
        printf("Enter the marks of the student in english: ");
        scanf("%d",&s[i].mark.english);
        printf("Enter the marks of the student in physics: ");
        scanf("%d",&s[i].mark.physics);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("Details of student %d is:\n ",i);
        printf("Name of the student: %s \n", s[i].name);
        printf("Roll number of the student is : %d \n",s[i].roll);
        printf("marks of the student in maths is : %d \n",s[i].mark.math);
        printf("marks of the student in english is : %d \n",s[i].mark.english);
        printf("marks of the student in physics is : %d \n",s[i].mark.physics);

    }
    
    return 0;
    
}