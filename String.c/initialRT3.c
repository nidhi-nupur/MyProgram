#include<stdio.h>
int main()
{
    char fname[40],lname[40];
    printf("Enter the name:\t");
    scanf("%s %s",fname,lname);
    printf("The name is:\t%s %s",fname,lname);
}