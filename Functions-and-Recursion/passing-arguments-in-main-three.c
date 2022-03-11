#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    float f;
    int ounces;
    printf("This program convert ounces to pounds.\n");
    if(argc!=2){
        printf("Please enter value correctly");
        return 0;
    }else{
        f=atof(argv[1])/16.0;
        ounces=atoi(argv[1]);
        printf("You have entered %d",ounces);
        printf("\nTotal pounds is %f",f);
    }
    return 0;
}