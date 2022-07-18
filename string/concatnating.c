#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
printf("enter the first string:\n");
gets(str1);
char str2[100];
printf("enter the second string:\n");
gets(str2);
int l,n,t,i;
l=strlen(str1);
n=strlen(str2);
t=n+l+1;
printf("%d \n",t);
char str3[t];
for(i=0;i<l;i++)
{
    str3[i]=str1[i];

}
int c=l;
str3[c]=32;
int k=c+1;
for(i=0;i<n+1;i++)
{
    str3[k]=str2[i];
    k++;
}

printf("the concatenation of two string are:\n");
for(i=0;i<t;i++)
{
    printf("%c",str3[i]);
    str[i]
}
return 0;
}