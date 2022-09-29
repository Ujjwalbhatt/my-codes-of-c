#include <stdio.h>
void add(int *x,int *y)
{
  int sum;
  sum= *x+*y;
  printf("sum of the two numberas using call by value and call by reference is :%d\n",sum);
  
}
void sub(int *x,int *y)
{
    
  int su;
  su= *x-*y;
  printf("subtration of the two numberas using call by value and call by reference is:%d\n",su);

}
int main()
{
    int a = 4, b = 3;
    printf("The value of a is %d and value of b is %d", a, b);
    add(&a, &b);
    sub(&a, &b);
    return 0;
}