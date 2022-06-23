#include <stdio.h>
int removerepeated(int size, int a[]);

int main()
{
   int i, size1, size2, size, j = 0, k;
   printf("Enter size of an array1\n");
   scanf("%d", &size1);
   printf("Enter size of an array2\n");
   scanf("%d", &size2);
   int a[size1], b[size2], uni[size1 + size2];
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

   size = removerepeated(size1 + size2, uni);
   printf("Array afetr Union \n");
   for (i = 0; i < size; i++)
   {
      printf("%d ", uni[i]);
   }
   return 0;

}
int removerepeated(int size, int* a)
{
   int i, j, k;
   for (i = 0; i < size; i++)
   {
      for (j = i + 1; j < size;)
      {
         if (a[i] == a[j])
         {
            for (k = j; k < size; k++)
            {
               a[k] = a[k + 1];
            }
            size--;
         }
         else
         {
            j++;
         }
      }
   }
   return (size);
}
