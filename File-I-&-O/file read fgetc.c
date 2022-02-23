#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr=fopen("getcDemo.txt","r");
    if(ptr==NULL){
        printf("The file could not be found");
    }else{
        c=fgetc(ptr);
        while(c!=EOF){//EOF=END OF FILE
            printf("%c",c);
            c=fgetc(ptr);
        }
    }
    return 0;
}
