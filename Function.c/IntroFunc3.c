#include<stdio.h>
void main()
{
    Add(); // Function call.
    printf("Hello Gems!!");
    Add(); 
    printf("Nice to see you again :)");
    Add();
    printf("Keep Rocking..!");
    Add();
}

void Add() // Define function.
{
    int a,b,Sum;
    printf("\nEnter any two number:");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\n",a+b);
}

// We can call a function before defining it, BUT Defining a function is mendatory.
// At the same time Declaration of a function is as mendatory as Defining a function.