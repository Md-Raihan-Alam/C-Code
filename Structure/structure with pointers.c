#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    int empId;
    float empSalary;
    char empName[20];
    ptr=&e1;/**This is how pointer is set to structure variable**/
    printf("Enter employee id:");
    scanf("%d",&empId);
    fflush(stdin);
    printf("Enter employee salary:");
    scanf("%f",&empSalary);
    fflush(stdin);
    printf("Enter employee name:");
    gets(empName);
    fflush(stdin);
    ptr->id=empId;/**which mean (*ptr).id=101;**/
    ///ptr->id=101; you can also set it like this
    ptr->salary=empSalary;
    strcpy(ptr->name,empName);
    printf("\nEmployee Id=%d",ptr->id);
    printf("\nEmployee salary=%f\n",ptr->salary);
    printf("\nEmployee name=%s\n",ptr->name);
    return 0;
}
