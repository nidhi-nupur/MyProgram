#include<stdio.h>
int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    // int **q=&a;   it'll show error
    int ***r=&q;
    *p=67;
    **q=13;
    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    printf("a=%d\n",*(*(*r)));
    printf("address of q=%d %d",r,&q);
    printf("address of p=%d %d",&p,q);
}