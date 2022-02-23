#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
void main()
{
    struct employee e1,e2,e3;
    printf("Enter the value of employee Id:");
    scanf("%d",&e1.id);
    printf("Enter the salary of employee:");
    scanf("%f",&e1.salary);
    printf("Enter the name of employee:");
    scanf("%s",e1.name);
    printf("Enter the value of employee Id:");
    scanf("%d",&e2.id);
    printf("Enter the salary of employee:");
    scanf("%f",&e2.salary);
    printf("Enter the name of employee:");
    scanf("%s",e2.name);
    printf("Enter the value of employee Id:");
    scanf("%d",&e3.id);
    printf("Enter the salary of employee:");
    scanf("%f",&e3.salary);
    printf("Enter the name of employee:");
    scanf("%s",e3.name);
    printf("\n");
    printf("Employee name %s, Employee id %d, Employee salary %f\n",e1.name,e1.id,e1.salary);
    printf("Employee name %s, Employee id %d, Employee salary %f\n",e2.name,e2.id,e2.salary);
    printf("Employee name %s, Employee id %d, Employee salary %f\n",e3.name,e3.id,e3.salary);
}
