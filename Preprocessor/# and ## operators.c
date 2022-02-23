#include<stdio.h>
#define MKSTRING(str) #str
/**
i=count
i ## 1= count1;
i ## 2= count2
i=i
i ## 1= i1
i ## 2= i2

## works like concatenated

**/
#define output(i) printf("%d %d\n",i ## 1, i ## 2)
int main(void)
{
    int value;
    int count1,count2;
    int i1,i2;
    value=10;
    printf("%s is %d\n",MKSTRING(value),value);
    count1=10;
    count2=20;
    i1=99;
    i2=-10;
    output(count);
    output(i);
    return 0;
}
