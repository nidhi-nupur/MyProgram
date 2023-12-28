#include<stdio.h>
#include<conio.h>
int main()
{
    float BS, DA, HR, GS;
    printf("BS=");
    scanf("%f",&BS);
    DA= (.40)*BS;
    HR= (.20)*BS;
    GS= BS+DA+HR;
    printf("GS=%f",GS);
    getch();
    return 0;
}