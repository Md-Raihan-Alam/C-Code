#include<stdio.h>
int main()
{
    /** p++/p-- will increase/decrease the pointer address value**/
    int *p,q=1;
    p=&q;
    (*p)++;/**This is how value of the var of pointer is pointing to increase**/
    printf("q=%d,*p=%d\n",q,*p);
    (*p)--;/**This is how value of the var of pointer is pointing to increase**/
    printf("q=%d,*p=%d\n",q,*p);
    return 0;
}
