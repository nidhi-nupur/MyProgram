#include<stdio.h>
int main()
{
    char name[40];
    printf("Enter the name:\t");
    gets(name);
    printf("The name is:\t%s",name);
    // 'puts' automatically adds a new line in the strings while 'printf' don't.
    puts(name);
    puts(name);
}