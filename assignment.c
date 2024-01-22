#include<stdio.h>
void main()
{
    int a=5,b=6;
    // int *p,*q;
    float *p,*q;
    p=&a;
    q=&b;
    // *q=*p;
    printf("a=%d\t%d\t%d",a,*p,*q);
}