#include<stdio.h>
#include<stdlib.h>
int main()
{
    //itoa() functions coverts integer to string
    //function syntax
    //atoi(int val, char *destbuf, int radix);
    int i=15;
    char buf[5000];
    itoa(i,buf,10);
    printf("Descimal Conversion,%s\n",buf);
    return 0;
}
