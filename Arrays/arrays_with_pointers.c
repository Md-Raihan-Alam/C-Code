#include<stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr=marks;//same as ptr=&marks[0];
    for(int i=0;i<4;i++){
        printf("Enter the marks of student %d:",i+1);
        scanf("%d",ptr);// ptr is pointing to the address which is same as &marks
        printf("\n");
        ptr++;//the next address is here
    }
    for(int i=0;i<4;i++){
        printf("THe value of marks for student %d is %d\n",i+1,marks[i]);
    }
    return 0;
}
