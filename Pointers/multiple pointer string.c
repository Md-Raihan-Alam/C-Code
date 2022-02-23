#include<stdio.h>
int main()
{
    char *p,**mp,str[80];
    p=str;
    mp=&p;
    printf("Enter your name:");
    gets(*mp);//enter less one asterisk from total asterisk
    puts(*mp);
    return 0;
}
