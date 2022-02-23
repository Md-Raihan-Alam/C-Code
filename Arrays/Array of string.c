#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    /**
    [3]=3 string;
    [50]=max length 50
    **/
    //first way
    char array[3][50];
    strcpy(array[0],"Hello world!");
    strcpy(array[1],"test");
    strcpy(array[2],"123");
    printf("Strings are= %s\n%s\n%s\n",array[0],array[1],array[2]);
    //second way
    char arr[3*50];
    strcpy(arr,"New World");
    strcpy(arr+50,"TestTwo");//after 50 character of beginning
    strcpy(arr+100,"456");//after 100 character of beginning
    printf("\n\n\nString are= %s\n%s\n%s\n",arr,arr+50,arr+100);
    //third way
    /**
        char arr3[3][50]={"Final string","Final test","789"};->50 is the limit of character per 1D
    **/
    char arr3[][50]={"Final string","Final test","789"};
    printf("\n\n\nStrings are= %s\n%s\n%s\n",arr3[0],arr3[1],arr3[2]);
    return 0;
}
