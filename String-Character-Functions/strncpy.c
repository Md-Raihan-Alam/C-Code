#include <stdio.h>
#include <string.h>
int main () {
   char str1[20];
   char str2[25];
   /* The first argument in the function is destination string.
    * In this case we are doing full copy using the strcpy() function.
    * Here string str2 is destination string in which we are copying the
    * specified string
    */
   strcpy(str2, "welcome to beginnersbook.com");

   /* In this case we are doing a limited copy using the strncpy()
    * function. We are copying only the 7 characters of string str2 to str1
    */
   strncpy(str1, str2, 7);

   printf("String str1: %s\n", str1);
   printf("String str2: %s\n", str2);

   return 0;
}
