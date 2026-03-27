#include <stdio.h>

void main() 
{
    char str[100];
    int len = 0;
    printf("Enter string: ");
    scanf("%s", str);
    while(str[len] != '\0')
        len++;
    char *start = str;
    char *end = str + len - 1;
    char temp;
    while(start < end) 
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s", str);
}
