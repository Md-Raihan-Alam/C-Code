#include<stdio.h>
int main()
{
    int a1[10]={0,1,2,3,4,5,6,7,8,9};
    int a2[10];
    int i;
    //a1=a2; array can not be copied like this
    for(i=0;i<10;i++) a2[i]=a1[i];//needs to be copied like this
    for(i=0;i<10;i++) printf("%d    ",a2[i]);
    return 0;
}
