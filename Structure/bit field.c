#include <stdio.h>
// A simple representation of the date
struct date {
    unsigned int d;
    unsigned int m;
    unsigned int y;
};
///We cannot have pointers to bit field members as they may not start at a byte boundary.
///A special unnamed bit field of size 0 is used to force alignment on next boundary. For example consider the following program.
struct date_two {
    // d has value between 0 and 31, so 5 bits
    // are sufficient
    int d : 5;

    // m has value between 0 and 15, so 4 bits
    // are sufficient
    int m : 4;

    int y;
};

int main()
{
    printf("Size of date is %lu bytes\n",
           sizeof(struct date));
    struct date dt = { 31, 12, 2014 };
    printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);

    printf("Size of date_two is %lu bytes\n",
           sizeof(struct date_two));
    struct date dt_two = { 31, 12, 2014 };
    printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);
}
