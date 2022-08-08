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
    } mark;
    int totalmarks;
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
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d", &s[i].roll);
        printf("Enter the marks of the student in math: ");
        scanf("%d", &s[i].mark.math);
        printf("Enter the marks of the student in english: ");
        scanf("%d", &s[i].mark.english);
        printf("Enter the marks of the student in physics: ");
        scanf("%d", &s[i].mark.physics);
        s[i].totalmarks = s[i].mark.math + s[i].mark.english + s[i].mark.physics;
    }
    int max = s[1].totalmarks;
    for (int i = 0; i < n; i++)
    {
        if (s[i].totalmarks > max)
        {
            max = s[i].totalmarks;
        }
    }

    printf("\nThe student details are: \n");

    for (int i = 1; i <= n; i++)
    {

        if (s[i].totalmarks == max)
        {
            printf("\nThe student with the highest marks is: \n");
            printf("Name: %s\n", s[i].name);
            printf("Roll number: %d\n", s[i].roll);
            printf("Marks in math: %d\n", s[i].mark.math);
            printf("Marks in english: %d\n", s[i].mark.english);
            printf("Marks in physics: %d\n", s[i].mark.physics);
            printf("Total marks: %d\n", s[i].totalmarks);
        }
    }

    return 0;
}