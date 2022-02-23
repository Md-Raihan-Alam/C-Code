#include<stdio.h>
int main()
{
    int a[]={4,6,8,2,1};
    int i;
    int *p=a;//this is pointer is initialized with array
    //a++->error
    //p++->valid
    printf("The first value of a is %d\n",*p);//->*(p+0)
    /**
    pointer for array index is
    *(pointer-variable + array-index)
    **/
    printf("The second value of a is %d\n\n\n",*(p+1));
    for(i=0;i<5;i++){
        printf("Address=%u\n",&a[i]);
        printf("Address=%u\n",a+i);
        printf("Value=%d\n",a[i]);
        printf("Value=%d\n",*(p+i));
    }
    return 0;
}
