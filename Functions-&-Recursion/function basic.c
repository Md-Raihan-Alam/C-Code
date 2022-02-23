#include<stdio.h>
void goodMorn();//function prototype
int main(){
    printf("The main has run first. Now the function will be called\n");
    goodMorn();//function call
    printf("Now the function call has end and it will return to main function");
    return 0;
}
void goodMorn(){//function definition
    printf("Good morning\n");
}
