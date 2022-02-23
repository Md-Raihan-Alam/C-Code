/**
fread( &variable, size of (structure variable), no of records, file pointer);
fwrite( &variable , size of structure variable, no of records, file pointer);
**/
#include<stdio.h>
struct student{
   int sno;
   char sname [30];
   float marks;
   char temp;
};
int main ( ){
   struct student s[60];
   int i;
   FILE *fp;
   fp = fopen ("student1.txt", "w");
   for (i=0; i<2; i++){
      printf ("enter details of student %d\n", i+1);
      printf("student number:");
      scanf("%d",&s[i].sno);
      scanf("%c",&s[i].temp);
      printf("student name:");
      gets(s[i].sname);
      printf("student marks:");
      scanf("%f",&s[i].marks);
      fwrite(&s[i], sizeof(s[i]),1,fp);///write the file
   }
   fclose (fp);
   fp = fopen ("student1.txt", "r");
   for (i=0; i<2; i++){
      printf ("details of student %d are\n", i+1);
      fread (&s[i], sizeof (s[i]) ,1,fp);///read the file
      printf("student number = %d\n", s[i]. sno);
      printf("student name = %s\n", s[i]. sname);
      printf("marks = %f\n", s[i]. marks);
   }
   fclose(fp);
   return 0;
}
