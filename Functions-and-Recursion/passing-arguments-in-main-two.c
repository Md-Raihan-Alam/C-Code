#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("The arguments=");
    for(i=1;i<argc;i++) printf("%s ",argv[i]);
    return 0;
}