/*
3.Write a C program to read the N integers typed on a Command line by the user.
  Find the number of primes, if a number is prime then write to a file “Prime.txt”. 
  Display the content of that file on the screen.
*/ 

#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fp;
    fp = fopen("prime.txt", "w");
    int n, c = 0, i, m = 0, t = 0;
    printf("Enter the range of number you want to enter:");
    scanf("%d", &n);
    int arr[n];
    int prime[n];
    printf("Enter the numbers:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        // m = sqrt(arr[i]);
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                c = 1;
                break;
            }
        }

        if (c == 0)
        {
            fprintf (fp, "%d ", arr[i]);
            
        }
    }
  
    fclose(fp);
    fopen("prime.txt", "r");
    while (fscanf(fp, "%d", &prime[t]) != EOF)
    {
        printf("%d ", prime[t]);
        t++;
    }
    

    fclose(fp);
    return 0;
}