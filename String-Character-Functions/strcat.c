/*The strcat() function concatenates a copy of str2 to str1 and terminates str1 with a null. The null terminator originally ending
str1 is overwritted by the first character of str2. The string str2 is untouched by the operator. The strcat() function 
return str1.

No bounds-checking takes place, so it is the programmer's responsibility to ensure that str1 is large enough to hold both its 
original contents and those of str2*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char str1[80],str2[80];
    printf("Enter two strings:");
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    puts(str1);
    getch();
    return 0;
}
