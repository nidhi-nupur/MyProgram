#include<stdio.h>
int main()
{
    int a[3][3],sumRow,sumCol,i,j;
    printf("Enter the elements of matrix a:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix a is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sumRow=0,sumCol=0;
        for(j=0;j<3;j++)
        {
            sumRow=sumRow+a[i][j];
            sumCol=sumCol+a[j][i];
        }
        printf("\nsumRow=%d\t \nsumCol=%d\t \n",sumRow,sumCol);
    }
}