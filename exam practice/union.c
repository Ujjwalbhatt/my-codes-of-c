/* union of two arrays */

#include <stdio.h>

main(){
   int i,size1,size2,size,j=0,k;
   printf("Enter size of an array1\n");
   scanf("%d",&size1);
   printf("Enter size of an array2\n");
   scanf("%d",&size2);
   int a[size1],b[size2],uni[size1+size2];
   printf("Enter numbers for array 1: ");
   for(i=0;i<size1;i++){
      scanf("%d",&a[i]);
   }
   printf("Enter numbers for array 2: ");
   for(i=0;i<size2;i++){
      scanf("%d",&b[i]);
   }

   for(i=0;i<size1;i++){
      uni[j]=a[i];
      j++;
   }
   for(i=0;i<size2;i++){
      uni[j]=b[i];
      j++;
   }