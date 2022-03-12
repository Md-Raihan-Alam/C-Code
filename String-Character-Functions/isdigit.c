///isdigit() function returns nonezero if ch is a digit(0 through 9); otherwise 0 is returned
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getchar();
        if(ch==' ') break;
        if(isdigit(ch)) printf("%c is a digit\n",ch);
    }
    return 0;
}