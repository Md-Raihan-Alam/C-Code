#include<stdio.h>
#include<math.h>
int main()
{
    //no operator is assumed to be present
    int i=(3*2)+1;
    int j=4%3;//module operator=returns the remainder
    int x=2,y=3;
    printf("The value of i is %d\n",i);
    printf("The value of j is %d\n",j);
    printf("The value of 4^5 is %f\n",pow(4,5));//pow=power function
    printf("The value of 6+5.6 is %f\n",6+5.6);
    printf("The value of 5+3.1 is %f\n",5+3.1);
    printf("The value of 3*x - 8*y is %d\n",3*x-8*y);
    printf("The value of 3*x - 8*y is %d\n",(3*x)-(8*y));
    printf("The value of 8*y/3*x is %d=wrong answer\n",8*y/3*x);//wrong answer
    printf("The value of 8*y/3*x is %d=correct answer",(8*y)/(3*x));
    return 0;
}
