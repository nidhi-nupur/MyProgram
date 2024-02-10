#include<stdio.h>

char music(); // We can declare function outside of the main body.
void main()
{
   // char music(); 
// We can declare function outside of the main body as well as inside of the main body.
    char c;
    c=music();
    printf("c=%c",c);
}

char music()
{
    char c;
    printf("Enter your Choice:");
    scanf("%c",&c);
    return c;
}