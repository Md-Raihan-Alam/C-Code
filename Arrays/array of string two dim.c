#include<stdio.h>
int main()
{
    char sentence[][40]={"My","name","is","raihan"};
    int i,j;
    for(i=0;i<sentence[i][0];i++){
        for(j=0;sentence[i][j];j++){
            printf("%c",sentence[i][j]);
        }
        printf(" ");
    }
    return 0;
}
