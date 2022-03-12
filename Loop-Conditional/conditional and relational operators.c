#include<stdio.h>
int main()
{

    int age;
    int pws;
    printf("password:");
    scanf("%d",&pws);
    if(pws!=123){
            printf("Intruder detected! not club member");
    }else{
        printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18 && age<=50){
        if(age==18 || age==50) printf("System error");
        else if(age>18 && age<=30) printf("Welcome! young man");
        else if(age>30 && age<=40) printf("Welcome! gentleman");
        else printf("Welcome! Old man");
    }else{
        if(age<18) printf("Too young");
        if(age>50) printf("Too old");
    }
    }
    return 0;
}
