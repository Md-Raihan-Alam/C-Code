#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("generate.txt","r");
    while(!feof(fp))
    {
        putchar(getc(fp));
    }
    rewind(fp);
    while(!feof(fp))
    {
        putchar(getc(fp));
    }
    fclose(fp);
    return 0;
}
