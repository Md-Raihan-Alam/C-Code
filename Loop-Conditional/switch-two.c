#include <stdio.h>
#include<conio.h>
int main()
{
      int x;
      char ch1;
      printf("Enter a number: ");
      scanf("%d",&x);
      switch(x)
      {
                 case 1://for the first case #1-30
                 case 30:
                      printf("The number you entered is >= 1 and <= 30");
                      printf("\nTake Briefcase Number 1");
                      break;         
                 case 31://for the second case #31-59
                 case 59:
                      printf("The number you entered is >= 31 and <= 59");
                      printf("\nTake Briefcase Number 2");
                      break;                 
                 case 60://for the third case #60-89
                 case 89:
                      printf("The number you entered is >= 60 and <= 89");
                      printf("\nTake Briefcase Number 3");
                      break;                 
                 case 90://for the fourth case #90-100
                 case 100:
                      printf("The number you entered is >= 90 and <= 100");
                      printf("\nTake Briefcase Number 4");
                      break;      
                 default:
                     printf("Not in the number range");
                     break;

                 }
      getch();
      }