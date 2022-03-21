// the exit() function cusese immediate normal termination of a program
#include<stdio.h>
#include<stdlib.h>
int menu(void)
{
    int i;
    for(i=0;i<10;i++){
        if(i==5) exit(1);
        printf("%d ",i);
    }
    return 0;
}