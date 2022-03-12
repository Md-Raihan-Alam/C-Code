/*The isupper() function returns nonzero if ch is an uppercase letter(A through Z); otherwise 0 is returned*/
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getche();
        if(ch==' ') break;
        if(isupper(ch)) printf("%c is uppercase\n",ch);
    }
    return 0;
}