#include<stdio.h>
int main()
{
    //array of character initialized like this
    char str[80];
    char str2[]="Pointers are fun";
    char *p;
    int i;
    *(str+3)='c';
    printf("%c\n",*(str+3));
    /**loop until null is found**/
    for(i=0;str2[i];i++){//str[i]!='\0'
        printf("%c",str2[i]);
    }
    printf("\n");
    /** pointer can be used like this**/
    p=str2;
    for(i=0;p[i]!='\0';i++){/** p[i] is same as p[i]!='\0' means loop until null is found **/
        printf("%c",*(p+i));/**=>p[i]**/
    }
    return 0;
}
