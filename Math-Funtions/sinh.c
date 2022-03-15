#include<stdio.h>
#include<math.h>
int main(void)
{
    double val=-1.0;
    do{
        printf("hyperbolic sine of %f is %f\n",val,sinh(val));
        val+=0.1;
    }while(val<=1.0);
    return 0;
}