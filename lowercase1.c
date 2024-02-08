#include<stdio.h>
#include<string.h>
main()
{
    char s[40];
    printf("Enter the string: ");
    gets(s);
    // strlwr(s); To change all the characters in lower case.
    strupr(s);    //To change all the characters in upper case.
    printf("The new string is: %s",s);
}