#include <stdio.h>
// #include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    int j = 0;
    int c = 0;
    printf("Enter the range of arrays: ");
    scanf("%d", &n);

    // p = (int *)malloc(n * sizeof(int));
    // ps = (int *)malloc(n * sizeof(int));
    int p[n]; 
    int ps[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d\n",*(p+i));

        if (*(p+i) % 2 == 0)
        {
            *(ps+j) = *(p+i);
            j++;
            c++;
        }
    }
    printf("Required arrays: \n");
    for (int i = 0; i < c; i++)
    {
        printf("%d \n", *(ps+i));
    }

    return 0;
}