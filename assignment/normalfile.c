#include<stdio.h>
int main()
{
	
	char ch;
	FILE *p;
	p=fopen("para.txt","w");
	printf("Enter paragraph: ");
	while((ch=getchar())!=';')
	{
		fprintf(p,"%c",ch);
	}
	fclose(p);
    p=fopen("para.txt","r");
    while(!feof(p))
    {
    	ch=fgetc(p);
    	printf("%c",ch);
	}
	fclose(p);
	return 0;
}