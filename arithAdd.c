#include<stdio.h>
void main()
{
    // int arr[10];
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    // int i=0;
    // printf("Enter the elements of array.");
    // for(i=0;i<10;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // printf("The array is:");
    // for(i=0;i<10;i++)
    // {
    //     printf("%d\t",arr[i]);
    // }
    int *p=&arr[0];
    int *q=&arr[5];
    *p=68;
    //p=p+q; //This will always show error as addition of two pointer directly is not valid.
    printf("\nThe value at address of arr: %d",*p);
    printf("Address of element is: %u\n");
    p=p+1;  // by using formula [p=p+n=(Base address of p)+n * (Size of Datatype)]
    printf("\nThe value at address of arr: %d",*p);
    printf("Address of element is: %u\n",p);
    p=p+3;
    printf("\nThe value at address of arr: %d",*p);
    printf("Address of element is: %u\n",p);
}