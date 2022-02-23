#include<stdio.h>
int main()
{
    char c;
    printf("Enter character:");
    c=getchar();
    printf("\nASCII code of %c is %d",c,c);//integer will turn the character into ascii code
    return 0;
}
