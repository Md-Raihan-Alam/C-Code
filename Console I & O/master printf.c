#include<stdio.h>
int main(void)
{
    printf("%.5d\n",10);///precision(.) with a number before d will decided how many numbers it will be
    printf("%.2f\n",99.9533);///.2 means after precision there will be only 2 numbers
    printf("%.10s\n","Hello nice to meet you, I am raihan");///will only take 10 character cause of .10
    printf("%d %o %x %X\n",90,90,90,90);/// o=octal;x=lowercase hexadecimal;X=uppercase hexadecimal
    printf("%e %E\n",99.231,99.231);///e=lowercase scientific value, E=uppercase scientific value;
    return 0;
}
