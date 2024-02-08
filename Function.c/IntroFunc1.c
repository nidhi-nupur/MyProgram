#include<stdio.h>
void Add() // Function Definition.
{
    int a,b,Sum;
    printf("\nEnter any two number:");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\n",a+b);
}
void main()
{
    Add();  // Function Calling.
    printf("Hello Gems!!");
    Add();  // Function Calling.
    printf("Nice to see you again :)");
    Add();  // Function Calling.
    printf("Keep Rocking..!");
    Add();  // Function Calling.
}

// We can call Function again and again to perform same tasks.