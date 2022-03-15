//The cosh() function returns the cosine of arg. The value of arg must be in radians
#include<stdio.h>
#include<math.h>
int main(void)
{
    double val=-1.0;
    do{
        printf("hyperbolic cosine of %f is %f\n",val,cosh(val));
        val+=0.1;
    }while(val<=1.0);
    return 0;
}