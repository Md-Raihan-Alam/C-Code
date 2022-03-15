/*The atan2() function returns the arc tangent of y/x. It uses the signs of its arguments to compute the quadrant of the return value*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    double val=-1.0;
    do{
        printf("atan2 of %f is %f\n",val,atan2(val,1.0));
        val+=0.1;
    }while(val<=1.0);
    return 0;
}