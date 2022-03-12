#include<stdio.h>
int main()
{
    FILE *ptr;
    FILE *ptr2;
    ptr=fopen("sample.txt","r");
    char c=fgetc(ptr);
    ptr2=fopen("sample-two.txt","w");
    while(c!=EOF){
        fputc(c,ptr2);
        c=fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr2);
    return 1000;
}
