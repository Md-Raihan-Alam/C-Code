#include<stdio.h>
int main()
{
    char str[80],str2[80];
    int i;
    printf("Enter string:");
    /// []= will take anything you put in here;
    scanf("%[a-zA-z ]",str);
    printf(str);
    printf("\nEnter number:");
    /// [^]=^ do not take this-type
    //scanf("%[^a-zA-Z]",str2);
    //printf(str2);
    printf("\nEnter number within limit of 2:");
    ///2 means only 2 character
    scanf("%2d",&i);
    printf("%d",i);
    return 0;
}
