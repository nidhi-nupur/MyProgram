#include<stdio.h>
void main()
{
    int i,a[5];
    printf("Enter the array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    // To print output in same order as input.
    // for(i=0;i<5;i++)
    // {
    //     printf("The array element at index %d is %d\n",i,a[i]);
    // }

    // To print output in reverse order.
        for(i=4;i>=0;i--)
    {
        printf("The array element at index %d is %d\n",i,a[i]);
    }

}