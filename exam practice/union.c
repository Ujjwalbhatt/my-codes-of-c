//union of two arrays
#include <stdio.h>

int main()
{
   int i, size1, size2, size, j = 0, k;
   printf("Enter size of an array1\n");
   scanf("%d", &size1);
   printf("Enter size of an array2\n");
   scanf("%d", &size2);
   size = size1 + size2;
   int a[size1], b[size2], c[size];
   printf("Enter numbers for array 1\n");
   for (i = 0; i < size1; i++)
   {
      scanf("%d", &a[i]);
   }
   printf("Enter numbers for array 2\n");
   for (i = 0; i < size2; i++)
   {
      scanf("%d", &b[i]);
   }

   for (i = 0; i < size1; i++)
   {
      c[j] = a[i];
      j++;
   }
   for (i = 0; i < size2; i++)
   {
   c[j] = b[i];
      j++;
   }

   for (i = 0; i < size; i++)
   {
      for (j = i + 1; j < size;)
      {
         if (c[i] == c[j])
         {
            for (k = j; k < size; k++)
            {
               c[k] = c[k + 1];
            }
            size--;
         }
         else
         {
            j++;
         }
      }
   }
   printf("Array after Union: ");
   for (i = 0; i < size; i++)
   {
      printf("%d ", c[i]);
   }
   return 0;
}
