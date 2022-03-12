///ispunct() function returns nonzero if ch is a punctuation character excluding the space; otherwise 0 is returned
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getchar();
        if(ch=='Q') break;
        if(ispunct(ch)) printf("%c is a punctuation character\n",ch);
    }
    return 0;
}