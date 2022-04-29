#include <stdio.h>
int main()
{
    int m;
    int s;
    printf("Enter 1 if you passed subject maths or 0 if you are failed: ");
    scanf("%d", &m);
    
    printf("Enter 1 if you passed subject science or 0 if you are failed: ");
    scanf("%d", &s);
    
    if (m == 1 && s == 1)
    {
       printf("congrates you passed both science and maths subject!");
       printf("congrates you got 45rs gift!");  
    }
    else if (m == 0 && s == 1)
    {
       printf("congrates you passed science but failed in maths subject!");
       printf("congrates you got 15rs gift!");  
    }
    else if (m == 1 && s == 0)
    {
       printf("congrates you passed maths but failed in science subject!");
       printf("congrates you got 15rs gift!");  
    }    
    else if (m == 0 && s == 0)
    {
       printf("sorry! you failed in maths and science both");
       printf("you got nothing!");  
    }
    else{
        printf("Wrong input!");
    }    
    return 0;
}