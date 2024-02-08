#include<stdio.h>
#define N 10
int main()
{
    int a[N][N],b[N][N],c[N][N],x,y,m,n,i,j,k,sum;
    printf("Enter the number of row and column of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the number of row and column of second matrix:\n");
    scanf("%d %d",&x,&y);
    if(n!=x)
    {
        printf("Can't multiply...");
    }
    else
    {
        printf("Enter the elements of 1st matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]); 
            }
        }
        printf("The 1st matrix is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]); 
            }
            printf("\n");
        }
        printf("Enter the elements of 2nd matrix:\n");
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&b[i][j]); 
            }
        }
        printf("The 2nd matrix is:\n");
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("%d\t",b[i][j]); 
            }
            printf("\n");
        }
        printf("The product of the two matrix is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                sum=0;
                for(k=0;k<m;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}