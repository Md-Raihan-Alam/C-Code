#include<stdio.h>
int main()
{
    int i=5,*j,**k,***l;
    j=&i;
    printf("The value of i is %d\n",i);
    printf("The value of j is %d\n",*j);
    printf("The address of i is %u\n",&i);
    printf("The address of i in j is %d\n",*(&j));
    printf("The address of j is %u\n",&j);
    k=&j;
    /**
    *k=store the value of j
    **/
    printf("The value of i is %d\n",i);
    printf("The value of k is %d\n",**k);
    printf("The address of j is %u\n",*(&j));
    printf("The address of j in k is %d\n",**(&k));
    printf("The address of k is %u\n",&k);
    l=&k;
    /**
    **l=store the value of k
    **/
    printf("The value of i is %d\n",i);
    printf("The value of l is %d\n",***l);
    printf("The address of k is %u\n",**(&k));
    printf("The address of k in l is %d\n",***(&l));
    printf("The address of l is %u\n",&l);

    /**
    pointer value increased or decreased like this
    **/
    printf("\n\n\nValue of l is %d",***l+5);
    return 0;
}
