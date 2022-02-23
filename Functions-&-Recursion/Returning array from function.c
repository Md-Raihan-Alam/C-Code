#include<stdio.h>
#include<stdlib.h>
int *two_oldest_ages(size_t n, const int ages[n]) {
    /***
    Store the array in dynamic memory allocation
    ***/
    int size=n;
    int* result=malloc(sizeof(int)*n);
    for(int i=0;i<size;i++){
        result[i]=ages[i];
    }
    for(int i=0;i<size;i++)
    printf("%d  ",result[i]);
    printf("\n The result array will be return");
    return result;
}
int main()
{
    int size=4;
    int arr[4]={32,43,54,65};
    two_oldest_ages(size,arr);
    return 0;
}
