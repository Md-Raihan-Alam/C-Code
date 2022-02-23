#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("How many integers you want to enter:");
    scanf("%d",&n);
    ptr=(int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter value for %d element:",i);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("Value for %d element is %d\n",i,ptr[i]);
    }
    free(ptr);//free the memeory which is being allocated used by calloc/malloc
    return 655;
}
