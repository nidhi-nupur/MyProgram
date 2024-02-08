#include<stdio.h>
int main()
{
    char name[10];
    printf("Enter name: ");
    scanf("%s",name);
    
    // Size of string below in &name[size of string] will determine how
    //  much of character from the start will be missing from the string. 
    printf("%s",&name[3]);
}