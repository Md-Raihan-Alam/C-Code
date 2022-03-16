/*The clock function returns the number of system clock cycles that have occurred since the program began execution . To copute the number of seconds,
divide this value by CLOCKS_PER_SEC macro*/
#include<stdio.h>
#include<time.h>
int main(void)
{
    int i;
    for(i=0;i<10000;i++) printf("%u\n",clock());
    return 0;
}