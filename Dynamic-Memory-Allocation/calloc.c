/**
When within the function the function return type and dynamic pointer return type must be same
like---
unsigned long *num(--){
----
unsigned long *numbers=calloc(size,sizeof(int));
---
}
**/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *) calloc(6,sizeof(int));//calloc intitalize and it's default value will be 0
    for(int i=0;i<6;i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    //if in case memory allocation fails then ptr will return NULL
    return 0;
}
