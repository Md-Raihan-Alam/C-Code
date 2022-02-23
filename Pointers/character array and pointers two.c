#include<stdio.h>
#include<string.h>
void print(const char *C)
{
    int i=0;
    while(*(C+i)!='\0'){
        printf("%c",*(C+i));
        i++;
    }
}
int main()
{
    char *c="Hello";///string gets stored compile time constant
      //char c[20]="Hello";
    print(c);
    return 0;
}
