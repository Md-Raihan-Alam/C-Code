#include<stdio.h>
int main(){
    /**
    j=address
    *j=value at address
    **/
    int i=34;
    int *j=&i;//j will now store the address of i
    printf("The value of i is %d\n",i);
    printf("The value of i in j is %d\n",*j);
    printf("The value of j is %d\n",j);
    printf("The address of i is %u\n",&i);
    printf("The address pointer j is pointing to is %u\n",j);
    printf("The address of j is %u\n",&j);
    printf("The value of j is %d\n",*(&j));
    printf("The address of j is %u\n",*(&j));
    /*another way*/
    int k;
    int *l=&k;
    *l=32;
    printf("\n\nThe value of k is %d\n",k);
    return 0;
}
