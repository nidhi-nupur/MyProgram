#include<stdio.h>
#include<string.h>
int main()
{
    char s[40];
    printf("Enter the string: ");
    gets(s);
    strrev(s);
    printf("The reverse of the string is: %s",s);
}