#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
int main()
{
    struct employee raihan={001,5210.20,"Raihan"};//={0} all value will be none/empty/zero
    printf("Name is %s\n",raihan.name);
    printf("Id is %d\n",raihan.id);
    printf("Salary is %f",raihan.salary);
    return 0;
}
