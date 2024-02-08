#include<stdio.h>
int main()
{
    int a[]={5,-3,6,-1,9,0,7};
    int *p=a; //*p=a means *p=&a[0]
    int *q=&a[5];
    printf("p-q=%d\n",p-q);
    printf("q-p=%d\n",q-p);
    printf("value=%d\n",*q);
    // q=q-3;
    // printf("value=%d\n",*q);
    // q=q+3;
    // printf("value=%d\n",*q);
    // printf("p-q=%d\n",p-q);
    p=p-3;
    printf("value=%d\n",*p);
    printf("p-q=%d\n",p-q);
}