#include<stdio.h>
#include<string.h>
int main()
{
    //strlen= count string length
    char *str="Raihan";
    int length=strlen(str);
    printf("The length of str is %d\n",length);
    //strcpy= string copy from another string
    char str2[45];
    strcpy(str2,str);//strcpy(to,from)
    printf("Now the str2 is %s\n",str2);
    //strcat=to cancatinate two strings
    char str3[45]="Hello ";
    strcat(str3,str);//strcat(to,from) to must be array
    printf("%s\n",str3);
    //strcmp=compare two strings
    char str4[45]="Rayhan";
    int val=strcmp(str,str4);//strcmp(this,with that)
    printf("Difference %d",val);
    /* if this is lower with that than it will be -1 if this is greater
    with that than it will be 1 if this is same as with that than it will be
    0
    */
    return 0;
}
