/**
Two enum names can have same value. For example, in the following C program both ‘Failed’ and ‘Freezed’ have same value 0.
 If we do not explicitly assign values to enum names, the compiler by default assigns values starting from 0. For example,
 in the following C program, sunday gets value 0, monday gets 1, and so on.
**/
#include <stdio.h>
enum State {Working = 13, Failed = 0, Freezed = 0};
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
int main()
{
   printf("%d, %d, %d", Working, Failed, Freezed);
   enum day d = thursday;
   printf("\nThe day number stored in d is %d", d);
   return 0;
}
