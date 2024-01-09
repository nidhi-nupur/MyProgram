#include<stdio.h>
main()
{
    int marks[5],i;
    float  sum=0,avg;
    printf("Enter marks of five students : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
        printf("sum=%f\n",sum);
    }
    avg=sum/5;
    printf("avg=%f",avg);
}