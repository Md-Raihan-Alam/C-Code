#include<stdio.h>
int main(){
    int i=32;
    int *ptr=&i;
    /**Will increase or decrease address the pointer is pointing to**/
    printf("Int");
    printf("The value of ptr is %u",ptr);
    ptr++;//increase the value of address
    printf("\nThe value of ptr is %u",ptr);
    ptr--;//increase the value of address
    printf("\nThe value of ptr is %u",ptr);
    printf("\n\n Now for char\n");
    char c='A';
    char *ptr2=&c;
    printf("The value of ptr2 is %u",ptr2);
    ptr2++;//increase the value of address
    printf("\nThe value of ptr2 is %u",ptr2);
    ptr2--;//increase the value of address
    printf("\nThe value of ptr2 is %u",ptr2);
    printf("\n\n Now for float\n");
    float f=32.32;
    float *ptr3=&f;
    printf("The value of ptr3 is %u",ptr3);
    ptr3++;//increase the value of address
    printf("\nThe value of ptr3 is %u",ptr3);
    ptr3--;//increase the value of address
    printf("\nThe value of ptr3 is %u",ptr3);
    return 0;
}
