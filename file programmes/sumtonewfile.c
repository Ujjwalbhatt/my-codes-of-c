/* copy the sum of the digit of number in one file 
to another new file*/
#include <stdio.h>
int main()
{
    FILE *fp;
    FILE *fpr;
    int num;
    int sum = 0, rem;
    fp = fopen("number.txt", "r");
    fpr = fopen("sum.txt", "w");
    while (!feof(fp))
    {
        fscanf(fp, "%d", &num);
        
        while (num > 0)
        {
            rem = num%10;
            sum = sum + rem;
            num = num / 10;
        }
        fprintf(fpr, "%d ", sum);
        sum = 0;
    }
    fclose(fpr);
    fclose(fp);

    return 0;
}