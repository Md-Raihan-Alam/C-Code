/** Void pointer - Generic pointer **/
#include<stdio.h>
int main()
{
    int a=1025;
    int *p;
    p=&a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("Address=%d, value=%d\n",p,*p);
    printf("Address=%d, value=%d\n",p+1,*(p+1));
    //void pointer
    void *p0;
    p0=p;
    /**
    printf("Address= %d, value =%d\n",p0,*p0);
    value will show error because void is null;
    same for arithmetic
    **/
    printf("Address= %d\n",p0);
    return 0;
}
