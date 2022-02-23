#include<stdio.h>
void myputs(char *p);
int main()
{
    myputs("My name is Raihan");
    return 0;
}
void myputs(char *p)
{
    while(*p){
        printf("%c",*p);
        p++;
    }
}
