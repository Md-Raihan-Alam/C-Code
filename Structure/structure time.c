#include<stdio.h>
#include<time.h>/// needed for strcutures time
int main()
{
    struct tm *systime;/// declare a pointer variable(systime)
    time_t t;/// time_t of header "time.h" and declare a pointer variable of it
    t=time(NULL);///connect it with time function
    systime=localtime(&t);///connect it with localtime by passing address time variable

    ///Check page 316 of "Teach yourself C" to learn about structures time

    ///.2 to set the limit of number
    ///now call the time pointer variable systime
    printf("Time is %.2d:%.2d:%.2d\n",systime->tm_hour,systime->tm_min,systime->tm_sec);
    printf("Date: %.2d/%.2d/%.2d",systime->tm_mday,systime->tm_mon+1,systime->tm_year+1900);
    return 0;
}
