#include<stdio.h>
int main(void)
{
    // Count digits in number N
    int digit=0;
    int number=4873;
    int n=number;
    while(n){
        // Truncate the last
        // digit from the number
        printf("Before being divided by 10 n value is =%d\n",n);
        n/=10;
        printf("After being divided by 10 n value is =%d\n",n);
        // Increment number of digits
        digit++;
    }
    printf("\n");
    int numberArray[digit];
    digit=0;
    n=number;
    ///Extract each digit
    while(n){
        printf("After begin n module by 10 digit and push it to array=");
        numberArray[digit]=n%10;
        printf("%d\n",numberArray[digit]);
        printf("Before divided by 10 n value is %d\n",n);
        n/=10;
        printf("Before divided by 10 n value is %d\n",n);
        digit++;
    }
    int i;
    printf("\n Array values=");
    for(i=0;i<digit;i++) printf("%d ",numberArray[i]);
    //Reverse the array for result
    printf("\n After being set in order=");
    int numberArrayOrder[digit];
    for(i=0;i<digit;i++){
        numberArrayOrder[i]=numberArray[(digit-1)-i];
    }
    for(i=0;i<digit;i++) printf("%d ",numberArrayOrder[i]);
    return 0;
}