#include<stdio.h>
main()
{
    int a=5,b=7,c;
    int *p,*q;
    // p=&a;
    q=(&b,&a);
    // c=*q;
    printf("Enter the value of a=%d\n",a);
    printf("Enter the value of b=%d\n",b);
    // printf("Enter the value of a=%d\n",*p);
    printf("Address of b=%d\n",&b);
    printf("The value of q=%d\n",q);
    // printf("Address of a=%x\n",p);
    // printf("Address of a=%x\n",&a);
    // printf("Address of p=%d\n",&p);
    // printf("Address of p=%x\n",&p);
    // printf("Address of q=%d\n",&q);
    // printf("Address of =%x\n",&q);
    // printf("Enter the value of c=%d\n",c);
    // printf("Address of c=%x\n",&c);
}