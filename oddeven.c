#include<stdio.h>
void main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter array Elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of Even Elements are:%d",even);
    printf("\nNumber of Odd Elements are:%d",odd);
}