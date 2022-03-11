#include<stdio.h>
int SumOfElements(int A[],int size)/**array passed as reference the code will be according to compiler is int *A **/
{
    int i,sum=0;
    //int size=sizeof(A)/sizeof(A[0]);
    //printf("SOE - Size of A =%d, size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
    for(int i=0;i<size;i++){
        sum+=A[i];/**A[i] is *(A+i)**/
    }
    return sum;

}
void Double(int A[],int size)/**array passed as reference the code will be according to compiler is int *A **/
{
    int i,sum=0;
    //int size=sizeof(A)/sizeof(A[0]);
    //printf("SOE - Size of A =%d, size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
    for(int i=0;i<size;i++){
        A[i]=2*A[i];
    }

}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int total=SumOfElements(a,size);
    printf("Sum of elements=%d\n",total);
    Double(a,size);
    int i;
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\nMain - Size of a = %d, size of a[0] = %d\n",sizeof(a),sizeof(a[0]));
    return 0;
}
