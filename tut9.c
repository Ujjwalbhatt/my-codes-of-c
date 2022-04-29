#include<stdio.h>
#define PI 3.14
int  main()
{
    int a = 8;
    float b= 7.334;
    // 
//    const float b= 7.334;
//     b= 7.34; PI= 5.33; // cannot do this since PI is a constant
// Wrong since b is a constant!!
    printf("tab character \t\t my backshlash \a %f", PI);
    // printf("Hello World\n");
    // printf("THe value of a is %d and the value of b is %11.4f\n" ,a, b);

    return 0;
}
