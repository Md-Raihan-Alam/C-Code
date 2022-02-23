#include<stdio.h>
int main(void)
{
    ///__STDC__ macro is defined as the value 1 if the compiler conforms to the ANSI standard
    printf("Compiling %s, line %d, on %s, at %s, ASCII %d",__FILE__,__LINE__,__DATE__,__TIME__,__STDC__);
    return 0;
}
