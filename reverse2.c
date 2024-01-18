#include<stdio.h>
#include<string.h>
void main()
{
    char s[50],c;
    int len,i;
    printf("Enter the String: ");
    gets(s);
    len=strlen(s);
    for(i=0;i<len/2;i++)
    {
        c=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=c;
    }
    printf("The reverse of the string is: %s",s);
}