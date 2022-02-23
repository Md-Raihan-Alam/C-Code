#include<stdio.h>
int main()
{
    /**
    *(pointer-variable+(desired-row-number*total-row-number)+array-index)
    **/
    int num[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int *p,i,j;
    p=(int *) num;/** This is how pointer is pointed to 2d array**/
    printf("%d\n",*(p +(1*3)+2));
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d  ",*(p+(i*3)+j));
        }
        printf("\n");
    }
    return 0;
}
