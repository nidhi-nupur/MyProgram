#include<stdio.h>
// void sum();
void sum(void); // while passing 'void' parameter here,
void sum()
{
    int a=4,b=5;
    printf("Sum=%d\n",a+b);
}
void main()
{
    sum(7,8); 
// This will show error, by mentioning "Too many arguments to fxn sum".
}