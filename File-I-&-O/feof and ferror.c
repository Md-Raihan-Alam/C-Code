#include<stdio.h>
int main()
{
    FILE *file;
    char c;
    file=fopen("sample.txt","r");
    if(file==NULL){
        printf("File could not be found");
    }else{
        while(!feof(file)){///feof=end of file
            c=fgetc(file);
            printf("%c",c);
            if(ferror(file)){///ferror= error in file
                printf("Error reading file");
            }
        }
    }
    return 0;
}
