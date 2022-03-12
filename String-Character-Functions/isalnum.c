///islanum() functions returns nonzero if its argument is either a letter or a digit; if not then return 0
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getchar();
        if(ch==' ') break;
        if(isalnum(ch)) printf("%c is alphanumeric\n",ch);
    }
    return 0;
}