#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    int a=4564;
    char str[50]="Nidhi Nupur";
    fp=fopen("First.txt","w");
    fprintf(fp,"%d\n%s",a,str);
    fclose(fp);
}