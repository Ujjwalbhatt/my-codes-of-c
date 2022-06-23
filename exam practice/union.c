#include <stdio.h>

int main()
{
   int i, size1, size2, size, j = 0, k;
   printf("Enter size of an array1\n");
   scanf("%d", &size1);
   printf("Enter size of an array2\n");
   scanf("%d", &size2);
   size = size1 + size2;
   int a[size1], b[size2], uni[size];
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
      uni[j] = a[i];
      j++;
   }
   for (i = 0; i < size2; i++)
   {
      uni[j] = b[i];
      j++;
   }

   for (i = 0; i < size; i++)
   {
      for (j = i + 1; j < size;)
      {
         if (uni[i] == uni[j])
         {
            for (k = j; k < size; k++)
            {
               uni[k] = uni[k + 1];
            }
            size--;
         }
         else
         {
            j++;
         }
      }
   }
   printf("Array afetr Union: ");
   for (i = 0; i < size; i++)
   {
      printf("%d ", uni[i]);
   }
   return 0;
}
