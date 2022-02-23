#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[80];
    int i;
    printf("Enter any character less than 80:");
    for(i=0;i<80;i++){
        ch[i]=getche();
        if(ch[i]=='\r') break;
    }
    printf("\n");
    for(i=0;ch[i]!='\r';i++) printf("%c",ch[i]);
    return 0;
}
