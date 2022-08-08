#include<stdio.h>
#include<string.h>
struct time_struct
{ 
int hours;
int minutes;
int seconds;
};
struct time_struct insert(struct time_struct);
void display(struct time_struct);
int main()
{
struct time_struct t1,t2;
t2=insert(t1);
display(t2);
return 0;
}
struct time_struct insert(struct time_struct t)
{
printf("Enter hours:" );
scanf("%d",&t.hours);
printf("Enter minutes:" );
scanf("%d",&t.minutes);
printf("Enter seconds:" );
scanf("%d",&t.seconds);
return t;
}
void display(struct time_struct t)
{
    if(t.seconds>=60)
    {
        t.seconds=t.seconds-60;
        t.minutes=t.minutes+1;
    }
    if(t.minutes>=60){
        t.minutes=t.minutes-60;
        t.hours=t.hours+1;
        }
printf("Time: %d:%d:%d",t.hours,t.minutes,t.seconds);
}