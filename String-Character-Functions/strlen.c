/*The strlen() function returns the length of the null-terminated string pointer to by str. The null is counted. The
size_t type is defined in string.h */
#include<stdio.h>
#include<string.h>
int main(void)
{
    char *s="Hello";
    printf("%d",strlen(s));
    return 0;
}