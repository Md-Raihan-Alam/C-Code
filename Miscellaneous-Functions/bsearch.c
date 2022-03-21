//check page 448 of Teach Yourself C
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
char *alpha="abcdefghijklmnopqrstuvwxyz";
int comp(const void *ch,const void *s);
int main(void)
{
    char ch;
    char *p;
    do{
        printf("Enter a character:");
        scanf("%c%*c",&ch);
        ch=tolower(ch);
        p=bsearch(&ch,alpha,26,1,comp);
        if(p) printf("is in aphabet\n");
        else printf("is not in alphabet\n");
    }while(p);
    return 0;
}
//compare two characters
int comp(const void *ch,const void *s)
{
    return *(char *)ch - *(char *)s;
}