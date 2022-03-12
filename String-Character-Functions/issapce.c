/*The issapce() function returns nonzero if ch is either a space, tab, vertical tab, form feed, carriage return, or newline character; 
otherwise 0 is returned*/
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getche();
        if(ch=='Q') break;
        if(isspace(ch)) printf("%c is whitespace\n",ch);
    }
    return 0;
}