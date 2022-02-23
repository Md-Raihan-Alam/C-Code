#include<stdio.h>
void print(char *C)
{
    int i=0;
    /** *(C+i)=C[i] **/
    while(*(C+i)!='\0'){
        printf("%c",*(C+i));
        i++;
    }
}
int main()
{
    char c[20]="Hello";
    print(c);
    return 0;
}
