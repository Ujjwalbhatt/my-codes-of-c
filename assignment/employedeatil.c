#include <stdio.h>
#include <stdlib.h>
struct salary
{
    int basic;
    float da;
    float tax;
    int pf;
    float gross;
};
struct employee
{

    char name[20];
    int emp_code;
    char department[100];
    char designation[100];
    struct salary salary;
};
int main()
{
    int n;

    
    printf("Enter the number of employee: ");
    scanf("%d", &n);
    struct employee e[n];
    printf(".................Enter the employee details................. \n");
    for (int i = 0; i < n; i++)
    {

        printf("Enter the employee name: ");
        scanf("%s", &e[i].name);
        printf("Enter the employee code: ");
        scanf("%d", &e[i].emp_code);
        printf("Enter the department: ");
        scanf("%s", &e[i].department);
        printf("Enter the designation: ");
        scanf("%s", &e[i].designation);
        printf("Enter the basic salary: ");
        scanf("%d", &e[i].salary.basic);
        e[i].salary.da = (e[i].salary.basic) * (0.5);
        e[i].salary.pf = 1800;
        e[i].salary.gross = e[i].salary.basic + e[i].salary.da;
        if (e[i].salary.gross > 50000)
        {
            e[i].salary.tax = (e[i].salary.gross) * (0.03);
        }
        else
        {
            e[i].salary.tax = 0;
        }
    }
    int code;
    int flag = 0;
    printf("Enter the employee code to search : ");
    scanf("%d", &code);
    printf(".................employee details................. \n");
    for (int i = 0; i < n; i++)
    {
        if (e[i].emp_code == code)
        {
            printf("Employee name: %s\n", e[i].name);
            printf("Employee code: %d\n", e[i].emp_code);
            printf("Department: %s\n", e[i].department);
            printf("Designation: %s\n", e[i].designation);
            printf("Basic salary: %d\n", e[i].salary.basic);
            printf("DA: %f\n", e[i].salary.da);
            printf("PF: %d\n", e[i].salary.pf);
            printf("Gross salary: %f\n", e[i].salary.gross);
            printf("Tax: %f\n", e[i].salary.tax);
            printf("Net salary: %f\n", e[i].salary.basic + e[i].salary.da - (e[i].salary.tax + e[i].salary.pf));
            break;
        }
        else
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        printf("Employee not found\n");
    }
    return 0;
}