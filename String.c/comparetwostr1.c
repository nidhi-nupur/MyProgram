#include<stdio.h>
#include<string.h>
int main()
{
    int count;
    char s1[30];
    char s2[30];
    printf("First string is:");
    gets(s1);
    printf("Second string is:");
    gets(s2);
    count=strcmp(s1,s2);
    if(count==0)
    {
        printf("Both the strings are Same");
    }
    else
    {
        printf("Both the strings are not Same");
    }
    printf("\ncount=%d",count);
}