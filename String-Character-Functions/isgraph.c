///isgraph() function returns nonzero if ch is any pritable character other than a space; otherwise 0 is returned.
///Printable characters are in the range 0x21 thorugh 0x7E
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getchar();
        if(ch=='q') break;
        if(isgraph(ch)) printf("%c is prinatable character\n",ch);
    }
    return 0;
}