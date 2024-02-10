#include<stdio.h>
void sum(); // while NOT passing 'void' parameter here,

void sum()
{
    int a=4,b=5;
    printf("Sum=%d\n",a+b);
}
void main()
{
    sum(7,8); //This will NOT show any error.
}