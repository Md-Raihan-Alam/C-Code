///islower() function returns nonzero if ch is a lowercase letter(a through z); otherwise 0 is return
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    for(;;)
    {
        ch=getchar();
        if(ch==' ') break;
        if(islower(ch)) printf("%c is lowercase character\n",ch);
    }
    return 0;
}