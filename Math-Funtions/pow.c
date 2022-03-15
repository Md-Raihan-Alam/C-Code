#include<math.h>
#include<stdio.h>
int main(void)
{
    double value=2,y=0;
    do{
        printf("%f power of %f=%f\n",value,y,pow(value,y));
        y++;
    }while(y<11.0);
    return 0;
}