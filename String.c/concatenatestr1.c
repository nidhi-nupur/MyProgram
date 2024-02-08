#include<stdio.h>
#include<string.h>
int main()
{
    char S1[30]="Nidhi";
    char S2[6]="Nupur";
    strcat(S1,S2);
    printf("The concatenate name:\n");
    printf("%s",S1);
}