#include<stdio.h>
int sumOfTwo(int a,int b);//function prototype, a,b=arguments with data type
int main(){
    int functionResult;
    functionResult=sumOfTwo(2,5);//function call, passing value, either static or by user
    printf("Sum of 2 & 5 is %d",functionResult);
    return 0;
}
int sumOfTwo(int a,int b){//function definition
    int result;
    result=a+b;
    return result;
}
