#include<stdio.h>
int main()
{
    int a;
    int *p;
    a=10;
    p=&a;
    printf("Value of a is %d\n",a);
    printf("Address of p is %d\n",p);
    *p=12;//dereferencing
    printf("Value of a after dereferencing of p or modifying p is, a=%d\n",a);
    int b=20;
    *p=b;/**will the address in p change to point b??**/
    printf("The address of p is %d\n",p);
    printf("The value of p is %d\n",*p);
    /**Even after this code**/
    p=&b;
    printf("The address of p is %d\n",p);
    return 0;
}
