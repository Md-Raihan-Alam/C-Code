//Pointers as function returns
#include<stdio.h>
#include<stdlib.h>
void PrintHelloWorld(){
    printf("Hello World\n");
}
int* Add(int* a,int* b){//called function-returns pointer
    int* c=(int* )malloc(sizeof(int));
    *c=(*a)+(*b);
    return c;
}
int main()//calling function
{
    int a=2,b=4;
    printf("Address of a in main=%d\n",&a);
    int* ptr=Add(&a,&b);//a and b are integers local to main
    printf("Sum=%d\n",*ptr);
    return 0;
}
