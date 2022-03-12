/*A strcmp() function lexicographically compares two null-terminated strings and returns an integer based on the outcome, 
as shown here:
less than 0   -> str1 is less than str2
0             -> str1 is equal to str2
greater than 0-> str1 is greater than str2
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[80]="hello";
    char str2[80]="hello";
    printf("%d",strcmp(str1,str2));
    return 0;
}