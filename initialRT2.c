#include<stdio.h>
int main()
{
    char name[40];
    // It has two kinds of output:
    // 1. When only one name enters.
    // 2. When surname entered along with name.
    printf("Enter the name:\t");
    scanf("%s",name);
    printf("The name is:\t%s",name);
}