#include<stdio.h>
#define FUN "Macro substitution are fun"
/**
The #define directive tells the preprocessor to perform a text substitution throughout our entire program
**/
void display();
int main()
{
    #define FUNTWO "Macro works anywhere"
    printf(FUN);
    printf("\n");
    display();
    return 0;
}
void display()
{
    printf(FUNTWO);
}
