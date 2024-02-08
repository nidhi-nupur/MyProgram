#include<stdio.h>
int main()
{
    char name[40];
    printf("Enter the string:");
    // scanf("%s",name);
    // printf("The name is:\t%s",name);

    gets(name);
    // gets creates problems like Buffer Overflow.
    printf("%s",name);
}