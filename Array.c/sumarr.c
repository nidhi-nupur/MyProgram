#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],sumarr[5],i;
    printf("Enter the elements of 1st array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of 2nd array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<5;i++)
    {
       sumarr[i]=arr1[i]+arr2[i];
       printf("Sumarr elements of index %d is:%d\n",i,sumarr[i]);
    }

}