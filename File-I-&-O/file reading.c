#include<stdio.h>
int main()
{
    FILE *ptr;
    int num,num2;
    ptr=fopen("sample.txt","r");
    if(ptr==NULL){
        printf("This file does not exist");
    }else{
        fscanf(ptr,"%d",&num);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);
        printf("Retrieved number is %d\n",num);
        printf("Retrieved number is %d\n",num2);
    }
    return 0;
}
