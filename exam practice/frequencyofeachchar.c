//frequency of each character in a string occurring single or multiple times
#include <stdio.h>
int main()
{
    char arr[100];
    printf("Enter the string: ");
    gets(arr);
    char freq[26] = {0};
    int i = 0;
    while (arr[i] != '\0')
    {
        freq[arr[i] - 97]++;
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {

            printf("Frequency of the character %c is: %d \n", (i + 97), freq[i]);
        }
    }
}