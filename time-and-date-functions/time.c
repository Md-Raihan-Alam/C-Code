/* The time function returns the current calendar time of the system, If the system has no time-keeping mechanism, then -1 is returned
The time function can be called either with a null pointer or with a pointer to a variable of type time_t. If the latter is used, then
the argument will also be assigned the calendar time*/
#include<stdio.h>
#include<time.h>
int main(void)
{
    struct tm *ptr;
    time_t lt;
    lt=time(NULL);
    ptr=localtime(&lt);
    printf(asctime(ptr));
    return 0;
}