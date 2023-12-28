#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap \n a=%d \n b=%d", a,b);
    getch();
    return 0;
}