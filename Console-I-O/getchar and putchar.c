#include<stdio.h>
/**
putchar put one character not multiple character
it is faster and more efficient than printf
**/
int main()
{
    char ch;
    do{
        ch=getchar();
        putchar(ch);
    }while(ch!='\n');
    return 0;
}
