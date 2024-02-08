#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i;
    char s1[50],s2[50];
    printf("Enter the first strings: ");
    gets(s1);
    printf("Enter the second strings: ");
    gets(s2);
    for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            count=1;
            break;
        }
    }
    if(count==0)
        printf("The both strings are same.");
    else
        printf("The both strings are not same.");
}