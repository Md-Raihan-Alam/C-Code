#include<stdio.h>
int main()
{
    int arr[]={10,100,1000};
    int size=sizeof(arr)/sizeof(int);
    int i,*ptr[size];/**array of pointer**/
    for(i=0;i<size;i++){
        ptr[i]=&arr[i];/**assign the address of integer**/
    }
    for(i=0;i<size;i++){
        printf("Vale of var[%d]=%d\n",i,*ptr[i]);/**Pointer of array is called like**/
    }
    return 0;
}
