#include<stdio.h>
int main()
{
    FILE *file;
    char str[80];
    file=fopen("getsDemo.txt","r");
    if(file==NULL){
        printf("Could not find file");
        return 0;
    }else{
        while(!feof(file)){
            fgets(str,79,file);///fgets(char_variable,total_size-1,file_variable) the last character if to declare the end of file
            if(ferror(file)) printf("error reading file");
        }
    }
    printf(str);
    fclose(file);
    file=fopen("putsdemo.txt","w");
    if(file==NULL){
        printf("Could not find file");
        return 0;
    }else{
            fputs(str,file);///fgets(char_variable,file_variable)
        }
    fclose(file);
    return 0;
}
