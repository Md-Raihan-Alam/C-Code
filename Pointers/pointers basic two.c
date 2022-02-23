#include<stdio.h>
int main()
{

    int a=10;
    /**
    int* p=&a; is same as below codes
    **/
    int *p;
    p=&a;/**without the this code the program will
     show error because pointer will need to point somewhere or " p needs to be initialized "**/
    /**P will show garbage integer value if a is not initialized**/
    printf("value of p is %d\n",p);
    printf("value of *p is %d\n",*p);/***p->vale at address pointed by p**/
    printf("Address of a is %d\n\n\n\n",&a);
    return 0;
}
