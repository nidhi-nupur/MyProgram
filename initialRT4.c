#include<stdio.h>
int main()
{
    char name[40];
    printf("Enter the name:\t");
    // scanf("%s",name);
    // printf("The name is:\t%s",name);

    gets(name);
    // gets creates problems like Buffer Overflow.
    printf("The name is: %s",name);
}