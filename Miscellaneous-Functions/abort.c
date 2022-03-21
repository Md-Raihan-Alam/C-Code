///abort function causes immediate termination of a program
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
    for(;;){
        if(getche()=='A') abort();
    }
    return 0;
}