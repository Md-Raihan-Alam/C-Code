#include<stdio.h>
#include<ctype.h>// needed for toupper and tolower
int main()
{
    char str[80];
    int i;
    printf("Enter a string:(less than 80)");
    gets(str);
    for(i=0;str[i];i++){
        str[i]=toupper(str[i]);// turn all the character into uppercase
    }
    puts(str);
    printf("\n");
    for(i=0;str[i];i++){
    str[i]=tolower(str[i]);
    }
    puts(str);
    return 0;
}
