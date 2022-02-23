#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("sample.txt","r");//r--> reading the file
    ptr=fopen("sample-two.txt","w");//w--> writing the file
    fclose(ptr);//closing the file
    return 0;
}
