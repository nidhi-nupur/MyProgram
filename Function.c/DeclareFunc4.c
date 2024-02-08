#include<stdio.h>

void sum();
//void sum(void); // By doing this,


void main()
{
    sum(3,5); // It'll show error.
}


void sum()
{
    int a,b;
    printf("\nEnter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Add=%d\n",a+b);
}