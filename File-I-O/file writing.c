#include<stdio.h>
int main()
{
    FILE *ptr;
    int rollNumber=107680;
    ptr=fopen("generate.txt","w");
    if(ptr==NULL){
        printf("File could not be created");
    }else{
        fprintf(ptr,"The number is %d",rollNumber);
        fclose(ptr);
    }
    return 180;
}
