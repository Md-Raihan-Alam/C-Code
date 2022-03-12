/*The strstr() function returns a pointer to the first occurrence of string pointed to by str2 in the string pointed to by
str1 (except str2's null terminator). It returns a null pointer if no match is found*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char *p;
    p=strstr("This is one of my test","one");
    printf(p);
    return 0;
}