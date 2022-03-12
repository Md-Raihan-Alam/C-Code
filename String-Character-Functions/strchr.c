/* The strchr() function returns a pointer to the first occurrence of the low-order byte of ch in the stirng pointer to by str.
If no match is found, a null pointer is returned*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char *p;
    p=strchr("This is a test",'a');
    printf(p);
    return 0;
}