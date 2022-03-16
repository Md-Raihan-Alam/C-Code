/* The localtime function returns a pointer to the broken-down from of time in the form a tim structure.
 The time is represendted in local time. The time value is generally obtained through a call to the time function. The structure used 
 by localtime to hold the broken-down statically allocated and is overwritten each time the function is called.
 If you wish to save the contents of the structure, you need to copy it elsewhere*/
 #include<stdio.h>
 #include<time.h>
 ///Print local and coordinated Universal time
 int main(void)
 {
     struct tm *local;
     time_t t;
     t=time(NULL);
     local=localtime(&t);
     printf("Local time and date: %s",asctime(local));
     local=gmtime(&t);
     printf("Coordinated Universal time and date: %s",asctime(local));
     return 0;
 }