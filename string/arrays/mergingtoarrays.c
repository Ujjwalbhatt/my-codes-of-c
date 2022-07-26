//merging while sorting arrays
#include <stdio.h>
int main(int argc, char *argv[])
{
    int arr[1000], arr1[1000], i=0, j=0, k[1000], t, g, h, x = 0;
    printf("Enter the range of arrays one: ");
    scanf("%d", &g);
    printf("Enter the range of array two: ");
    scanf("%d", &h);
    t = g + h;

    for (int i = 0; i < g; i++)
    {
        printf("Enter the %d element of the arrays 1: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < h; i++)
    {
        printf("Enter the %d element of the arrays 2: ", i);
        scanf("%d", &arr1[i]);
    }
 
    for (int c = 0; c < t; c++)
    {
        if (i < g)
        {
            if (arr[i] < arr1[j])
            {
                k[x] = arr[i];
                i++;
                 x++;
            }
            else
            {
                k[x] = arr1[j];
                x++;
                j++;
            }
        }
        else
        {
            k[x] = arr1[j];
            x++;
            j++;
        }
    }
    printf("This the sorted merged arrays: ");
    for (int i = 0; i < t; i++)
    {
        printf("%d ", k[i]);
    }

    return 0;
}