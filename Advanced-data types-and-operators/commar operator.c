/**
comma operator tells the compiler to "do this and this and this"
some example:
for(i=0,j=0;i+j<count;i++,j++)
value=(count,99,33,100)
**/
#include<stdio.h>
int main()
{
int I,J;
char ch;
///count to 49
for(I=0,J=100;I<J;I++,J--) printf("%d ",I);
printf("\n");
ch=getchar(),///notice the comma here
putchar(ch+1);
return 0;
}
