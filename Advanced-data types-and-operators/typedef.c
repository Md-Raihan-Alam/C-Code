#include<stdio.h>
#include<string.h>
typedef struct employee{
    int id;
    float salary;
    char name[40];
}typEmp;
void show(typEmp emp){
 printf("Employee Id:%d, Name:%s, Salary %f\n",emp.id,emp.name,emp.salary);
 emp.id=201;
}
int main()
{
    typEmp e1;
    typEmp *ptr;
    ptr=&e1;
    ptr->id=101;
    ptr->salary=5240.55;
    strcpy(ptr->name,"Raihan");
    printf("Id: %d\n",e1.id);
    show(e1);
    printf("The Id of employee after function is %d",e1.id);
    return 0;
}
