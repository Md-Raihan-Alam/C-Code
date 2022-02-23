#include<stdio.h>
int main()
{
    int marks[5];
    printf("Enter the final mark:");
    scanf("%d",&marks[4]);
    marks[0]=65;
    marks[1]=76;
    marks[2]=62;
    marks[3]=55;
    printf("%d %d final marks=%d",marks[0],marks[1],marks[4]);
    return 0;
}
