#include <stdio.h>
//  int fibo(int num)
// {

//     if (num == 0)

//         return 0;

//     else if (num == 1)

//         return 1;
//     else
//         return (fibo(num - 1) + fibo(num - 2));
// }

/*
dry run: for number 4
           fibo (3)      +               fibo(2)
           fibo (2)     +    fibo(1)  + fibo(1) + fibo(0) 
    fibo  (1) + fibo (0)
    1+0 +1+ 1+ 0
    3



*/
int main(int i)
{
    // int c, v = 0;
    // printf("Enter the number of fibonacci you want to print:");
    // scanf("%d", &c);
    // printf("fibonacci series for number %d\n",c);
    // for (int i = 0; i <= c; i++)
    // {

    //     printf("%d\t", fibo(v));
    //     v++;
    // }
    // 
    printf("%d",i);
    return 1;
}
/*
int n, i = 0, c;
  
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibon121acci(i));
      i++; 
   }

*/