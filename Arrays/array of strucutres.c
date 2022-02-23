#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
int main()
{
    struct employee facebookEmployee[100];
    facebookEmployee[0].id=1;
    facebookEmployee[0].salary=5002.55;
    strcpy(facebookEmployee[0].name,"Raihan");
    facebookEmployee[1].id=2;
    facebookEmployee[1].salary=5102.55;
    strcpy(facebookEmployee[1].name,"Rayhan");
    printf("Done");
    return 0;
}
