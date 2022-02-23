#include<stdio.h>
#include<string.h>
int main()
{
    //typedef is like alias I do not have to type int over and over agian
    //typedef old-name new-name
    typedef int height;
    height num=20;
    printf("%d",num);
    return 0;
}
