/*The isxdigit() function returns nonzero if ch is a hexadecimal digit; otherwise 0 is returned, A hexadecimal digit will be 
in one of these ranges: A thorugh F, a through f, or 0 through 9*/
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getche();
        if(ch=='Q') break;
        if(isxdigit(ch)) printf("\n%c is hexadecimal\n",ch);
    }
    return 0;
}