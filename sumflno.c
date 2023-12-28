#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n, sum=0;
    printf("n=");
    scanf("%d",&n);
    a=n/1000;
    sum=sum+a;
    a=n%10;
    sum=sum+a;
    printf("sum=%d",sum);
    getch();
    return 0;
}