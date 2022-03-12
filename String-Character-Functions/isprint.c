///isgraph() function returns nonzero if ch is any pritable character  including space; otherwise 0 is returned.
///Printable characters are in the range 0x20 thorugh 0x7E
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    for(;;)
    {
        ch=getchar();
        if(ch=='q') break;
        if(isprint(ch)) printf("%c is printable character\n",ch);
    }
    return 0;
}