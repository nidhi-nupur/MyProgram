#include<stdio.h>
typedef struct Student // Globally declared typedef 
{
    int S_No;
    char name[30];
    float percent;
}Stu;
void main()
{
    struct Student S={1,"Nidhi",97.5}; 
    Stu V={2,"Nupur",93.5}; // Can't declare and initialize Same variable twice.
    printf("%d\t%s\t%f\n",S.S_No,S.name,S.percent);
    printf("%d\t%s\t%f\n",V.S_No,V.name,V.percent);
}