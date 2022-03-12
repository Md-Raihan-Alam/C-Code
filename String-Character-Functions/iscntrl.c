///iscntrl() function returns nonzero if ch is between 0 and 0x1F or is equal to 0x7F(DEL); otherwise 0 is returned
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getchar();
        if(ch==' ') break;
        if(iscntrl(ch)) printf("%c is a control character\n",ch);
    }
    return 0;
}