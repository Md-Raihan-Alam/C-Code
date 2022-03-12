/*The strtok() function returns a pointer to the next token in the string pointed to by str1. The characters making up the string
pointed to by str2 are the delimiters that separate each toke. A null pointer is returned when there are no more tokens.
The first time strtok() is called, str1 is actually used in the call. Subsequent calls use a null pointer for the first argument. In this way the entire string
can be reduce dto its tokens.
It is possible to use a different set of delimiters for each call to strtok()*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Geeks-for-Geeks";
 
    // Returns first token
    char* token = strtok(str, "-");
 
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }
 
    return 0;
}