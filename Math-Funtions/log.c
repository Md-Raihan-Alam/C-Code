///The log() function returns the natural logarithm for num. A domain error occurs if num is negative and a range error occurs if the argument is 0
#include<stdio.h>
#include<math.h>
int main(void)
{
    double val=1.0;
    do{
        printf("%f=%f\n",val,log(val));
        val++;
    }while(val<11.0);
    return 0;
}