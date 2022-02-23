#include<stdio.h>
#include<stdlib.h>// needed header file for atoi
int main()
{
    char c[10];
    int i;
    printf("Enter a character(character type):");
    gets(c);
    i=atoi(c);//turn the character into integer
    printf("\nNumber is %d",i);
    return 0;
}
