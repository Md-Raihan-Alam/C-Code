#include<stdio.h>
void slice(char *st,int start,int finish){
    int i=0;
    while((start+i)<finish){
        st[i]=st[i+start];
        i++;
    }
    st[i]='\0';
}
int main()
{
    char st[]="Raihan";
    slice(st,1,4);
    printf("%s ",st);
    return 0;
}
