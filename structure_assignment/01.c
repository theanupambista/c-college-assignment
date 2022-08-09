#include <stdio.h>
// library for malloc
#include <stdlib.h>
struct Employee
{
    char name[30];
    int age;
    float salary;
};
int main()
{
    int noOfEmp, i, j;
    float avgSalary, sum = 0;
    struct Employee *emp;
    printf("Enter the no. of employee: ");
    scanf("%d", &noOfEmp);

    // allocating space dynamically
    emp = (struct Employee *)malloc(noOfEmp * sizeof(struct Employee));

    // taking input from user and storing in struct emp
    for (i = 0; i < noOfEmp; i++)
    {
        printf("Enter name: ");
        scanf("%s", &(emp + i)->name);
        printf("Enter the age: ");
        scanf("%d", &(emp + i)->age);
        printf("enter the salary: ");
        scanf("%f", &(emp + i)->salary);
    }

    // adding salary of all employees
    for (j = 0; j < noOfEmp; j++)
    {
        sum += (emp + j)->salary;
    }
    // finding average salary of employees
    avgSalary = sum / noOfEmp;

    // printing the salary
    printf("the average salary is %.2f", avgSalary);
}