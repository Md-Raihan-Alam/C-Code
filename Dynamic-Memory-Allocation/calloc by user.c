#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("How many integers do you want to enter:");
    scanf("%d",&n);
    ptr=(int *) calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value of %d element:",i);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}
