#include<stdio.h>

void sum();


void main()
{
    sum(3,5);
}


void sum(void) // It'll not behave as error.
{
    int a,b;
    printf("\nEnter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Add=%d\n",a+b);
}