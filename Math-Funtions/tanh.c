#include<stdio.h>
#include<math.h>
int main(void)
{
    double val=-1.0;
    do{
        printf("hyperbolic tangent of %f is %f\n",val,tanh(val));
        val+=0.1;
    }while(val<=1.0);
    return 0;
}