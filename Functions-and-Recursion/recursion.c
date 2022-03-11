#include<stdio.h>
int factorialAmount=1;
int factorial(int x);
int main(){
    int a;
    a=factorial(2);
    printf("The factorial is %d",a);
    return 0;
}
int factorial(int x){
    if(x>1){
        factorialAmount=factorialAmount*x;
        x--;
        factorial(x);//calling a function within it's own function is recursion
    }else{
    return factorialAmount;
    }
}
