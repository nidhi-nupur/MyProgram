#include<stdio.h>
void Sub()
{
    int a,b;
    printf("\nEnter any two number:");
    scanf("%d %d",&a,&b);
    printf("Sub=%d\n",a-b);
}
void Add()
{
    int a,b;
    printf("\nEnter any two number:");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\n",a+b);
    Sub();  // We can call a function in another function.
    // But we can't Define a function in another function. 
    // Like [void Sub()], doing it consider as WORNG.
}
void main()
{
    Add();
    printf("Hello Gems!!");
    Add();
    printf("Nice to see you again :)");
    Sub();  // We can call multiple function simultaneously in our code.
    printf("Keep Rocking..!");
    Add();
    printf("Bai.. :P");
}