/*The strcpy() function is used to copy the contents of str2 into str1; str2 must be a pointer to a null-terminated string.
The strcpy() function returns a pointer to str1*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[80];
    strcpy(str,"hello");
    printf(str);
    return 0;
}