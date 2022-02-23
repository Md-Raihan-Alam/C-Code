#include<stdio.h>
int main()
{
    int studentsRollNo[5]={1,2,3,4,5};
    int marks[5];
    for(int i=0;i<5;i++){
        printf("Enter the value of marks for student %d :",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        printf("Student Roll no:%d exam mark is %d\n",studentsRollNo[i],marks[i]);
    }
    return 0;
}
