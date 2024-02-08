#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,len;
    char s[40],c;
    printf("Enter the string: ");
    gets(s);
    len=strlen(s);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
    printf("The reverse of the string is: %s",s);
}