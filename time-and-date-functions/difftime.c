/* The difftime function returns the difference, in seconds, between time1 and time2. That is, time -time1*/
#include<stdio.h>
#include<time.h>
int main(void)
{
    time_t start,end;
    long unsigned int t;
    start=time(NULL);
    for(t=0;t<500000L;t++);
    end=time(NULL);
    printf("Loop required  %f seconds.\n",difftime(end,start)); 
    return 0;
}