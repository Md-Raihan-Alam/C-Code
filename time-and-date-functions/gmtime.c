/* The gmtime() function returns a pointer to the broken-down from of time in the form of a tm structure. The time is represendted in  
Coordinated Universal Time(i.e., Greenwich Mean Time). The time value is generally obtained through a call to time(). The structure
used by gmtime() to hold the broken down time is statically allocated and is overwritten each time the function is called. If you wish
to save the contents of the structure, you need to copy it elsewhere.*/
#include<time.h>
#include<stdio.h>
/// Print  local and Coordinated Universal time */
int main(void)
{
    struct tm *local, *coordinated;
    time_t t;
    t=time(NULL);
    local=localtime(&t);
    printf("Local time and date: %s\n",asctime(local));
    coordinated=gmtime(&t);
    printf("Coordinated Universal time and date: %s",asctime(coordinated));
    return 0;
}