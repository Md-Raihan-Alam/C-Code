///asctime->local time
#include<time.h>
#include<stdio.h>
int main(void)
{
    struct tm *ptr;
    time_t lt;
    lt=time(NULL);
    ptr=localtime(&lt);
    printf(asctime(ptr));
    return 0;
}