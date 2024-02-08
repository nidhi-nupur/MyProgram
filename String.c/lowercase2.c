#include<stdio.h>
#include<string.h>
main()
{
    char s[50],i;
    printf("Enter the string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        // if(s[i]>='A' && s[i]<='Z')
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
    printf("The new string is: %s",s);
}