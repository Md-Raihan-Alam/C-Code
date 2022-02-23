#include<stdio.h>
void pointArray(int *ptr,int n){//same as pointArray(int ptr[],int n)
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
    *(ptr+2)=5555;//the value will be changes in arr array of main as well
}
int main(){
    int arr[]={1,2,432,123,65,43,12};
    pointArray(arr,7);
    printf("\n%d",arr[2]);
    return 0;
}
