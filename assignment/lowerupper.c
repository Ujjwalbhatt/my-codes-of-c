// Upper to lower and lower to upper

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    gets(ch);
   int up=0,low=0;
  
    int i=0;
  
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {

            up++;
        }
        else if(ch[i]>='a' && ch[i]<='z')
        {
           low++;
        }
        i++;
    }

    printf("freuwnecy of upper character: %d \n frequency of lower character: %d ",up,low);

    return 0;
}