// check string is palindrome or not
#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
   
    int l = 0;
    int n = strlen(str) - 1;

    while (n > l)
    {
        if (str[l++] != str[n--])
        {
            printf("%s is not a palindrome\n", str);
            goto here;
        }
    }
    printf("%s is a palindrome\n", str);
    here:
    return 0;
}