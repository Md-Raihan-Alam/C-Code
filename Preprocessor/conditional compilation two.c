#include <stdio.h>

#define YEARS_OLD 10

int main()
{
   #ifdef YEARS_OLD
        printf("TechOnTheNet is over %d years old.\n", YEARS_OLD);
   #endif
   #ifndef like
        #define like 10
   #endif
        printf("%d\n",like);
   printf("TechOnTheNet is a great resource.\n");

   return 0;
}
