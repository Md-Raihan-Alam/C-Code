#include<stdio.h>
#include<math.h>
int main(void)
{
    double val=1.0;
    do{
        printf("%f=%f\n",val,log10(val));
        val++;
    }while(val<11.0);
    return 0;
}