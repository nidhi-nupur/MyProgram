#include<stdio.h>
void main()
{
    int *p;
    printf("%d\n",*p); // Wild Pointer.
}

// Will show some garbage value.