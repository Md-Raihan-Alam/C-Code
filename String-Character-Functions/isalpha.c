//isalpha() function returns nonzero if ch is a letter of the alphabet; otherwise 0 is returned
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getchar();
        if(ch==' ') break;
        if(isalpha(ch)) printf("%c is a letter\n",ch);
    }
    return 0;
}
