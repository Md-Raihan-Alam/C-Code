#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])///argc=value length; argv=store value
{
    int i;
    double d;
    long l;
    i=atoi(argv[1]);
    l=atoi(argv[2]);
    d=atof(argv[3]);
    printf("Total value length=%d",argc);
    printf("%d %ld %lf",i,l,d);
    return 0;
}