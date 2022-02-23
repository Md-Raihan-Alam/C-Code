#include<stdio.h>
void PrintHello()
{
    printf("Hello\n");
}
void PrintHelloName(char *name)
{
    printf("Hello %s\n",name);
}
int main()
{
    void (*ptr)();
    ptr=&PrintHello;
    ptr();
    void (*ptr2)(char *);
    ptr2=PrintHelloName;
    ptr2("Raihan");
    return 0;
}
