// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a, NewNo;
//     printf("enter the value of a=");
//     scanf("%d",&a);
//     printf("NewNo.=%d", NewNo= a%10*100+a/10);
// getch();
// return 0;
// }


#include<stdio.h>
int main()
{
    int a;
    printf("a=");
    scanf("%d",&a);
    a=a%10*100+a/10;
    printf("%d",a);
    return 0;
}