#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int i;
    int *p=arr;/** This is how pointer needs to set with array**/
    printf("%d %d\n",*p,*(p+1));
    /**
    *(pointer-variable + array-index)
    **/
    /**
    *p=*(p+0)
    *(p+1)=arr[1] This is how pointer work with array indexes
    **/
    for(i=0;i<10;i++){
        printf("%d  ",*(p+i));
    }
    return 0;
}
