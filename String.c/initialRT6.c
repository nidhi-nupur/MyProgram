#include<stdio.h>
int main()
{
    char name[40];
    printf("Enter the name:\t");
    gets(name);
    printf("The name is:\t%s\n",name);
    printf("%.5s\n",name);
    // Here .5 means that while compiling 5 char of the entered string.
    
    
    printf("%10.5s",name);
    // Here 10.5 means that 10 is the minimum width that the string will take.
    // 5 is the maximum number of characters from the string that will be
    //  printed from the left side of the alocated space.
}