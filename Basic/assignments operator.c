#include<stdio.h>
int main(void)
{
    int a=2;
    int b=4;
    int num1=1;
    int num2=1;
    int add=a+b;//addition
    num1+=num2;//addition
    int num3=2;
    int num4=1;
    int sub=a-b;//Substraction
    num3-=num4;//Substraction
    int num5=2;
    int num6=2;
    int mul=a*b;//Multiplication
    num5*=num6;//Multiplication
    int num7=4;
    int num8=2;
    int div=b/a;//Division
    num7/=num8;//Division
    printf("Sum=%d \nNew Sum=%d\nSub=%d\nNew Sub=%d\nMul=%d\nNew Mul=%d\nDiv=%d\nNew Div=%d",add,num1,sub,num3,mul,num5,div,num8);
    return 0;
}
