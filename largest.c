#include<stdio.h>
int main(){
int a,b,c;
printf("enter the three number:");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
    printf("%d is the largest of three number",a);

}
else if (b>a&&b>c)
{
    printf("%d is the largest of three number ",b);
}
else{
    printf("%d is the largest of three number ",c);

}
return 0;
}