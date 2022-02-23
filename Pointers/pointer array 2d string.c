#include<stdio.h>
#include<string.h>
int main(){
    char *p[][2]={
        "Red Delicious","red",
        "Golden Delicious","yellow",
        "Winesap","red",
        "Gala","reddish orange",
        "Lodi","green",
        "Mutsu","yellow",
        "Cortland","red",
        "Jonathan","red",
        "","",/**terminate the table with null strings**/
    };
    int i;
    char apple[80];
    printf("Enter the name of apple(less than 80 characters):");
    gets(apple);
    for(i=0;*p[i][0];i++){
        if(!strcmp(apple,p[i][0])){
            printf("%s is %s\n",apple,p[i][1]);
        }
    }
    return 0;
}
