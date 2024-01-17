 #include<stdio.h>
 #include<string.h>
 int main()
 {
    int lengthS1, lengthS2, i;
    char S1[30]="Nidhi ";
    char S2[6]="Nupur";
    lengthS1=strlen(S1);
    lengthS2=strlen(S2);
    for(i=0;i<=lengthS2;i++)
    {
        S1[lengthS1+i]=S2[i];
    }
    printf("The concatenate name:\n");
    printf("%s",S1);
}