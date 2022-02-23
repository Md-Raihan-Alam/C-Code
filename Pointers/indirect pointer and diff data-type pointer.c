#include<stdio.h>
int main()
{
    int *p,q,num=10;
    float *f;
    /** *p=32;-> will show error because p needs to point to any variables first**/
    p=&q;
    *p=32;
    printf("q=%d,*p=%d",q,*p);
    f=&num;
    printf("\n%f",f);//not syntactically incorrect but the fragment is wrong and will show warnings
    return 0;
}
