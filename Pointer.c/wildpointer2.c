#include<stdio.h>
void main()
{
    int a=27;
    int *p=&a;
    printf("%d\n",*p); // Here it'll not behave as wild pointer.
}