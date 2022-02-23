#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
    char str[80];
    printf("Enter the file name you want to erase:");
    gets(str);
    printf("\nAre you sure you want to delete it:(Y/N)");
    if(toupper(getchar())=='Y') remove(str);
    return 0;
}
