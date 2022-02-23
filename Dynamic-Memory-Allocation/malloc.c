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
    ptr=(int *)malloc(6*sizeof(int));//(int *)=typecast
    for(int i=0;i<6;i++){
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0;i<6;i++){
        printf("The value of %d element is :%d\n",i+1,ptr[i]);
    }
    return 0;
}
