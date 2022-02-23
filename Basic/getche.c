#include<stdio.h>
#include<conio.h>//needed for getch
int main()
{
    printf("Enter a charcter");
    char c=getch();//no need for type 'ENTER' btn
    printf("\nEntered:%c",c);
    return 0;
}
