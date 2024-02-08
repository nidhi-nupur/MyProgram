#include<string.h>
int main()
{
    unsigned int count=0,i=0;
    char name[30];
    printf("Enter name:");
    gets(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("The string length is:%d",count);
}