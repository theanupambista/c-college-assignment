#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char name[30];
    char address[50];
    int cMark;
    int iSysMark;
};
int main()
{
    struct Student *stu;
    int noOfStu, i, j;
    int total = 0;
    printf("Enter the no. of student: ");
    scanf("%d", &noOfStu);

    // allocating space dynamically
    stu = (struct Student *)malloc(noOfStu * sizeof(struct Student));
    // taking input from user and storing in struct stu
    for (i = 0; i < noOfStu; i++)
    {
        printf("Enter name: ");
        scanf("%s", &(stu + i)->name);
        printf("Enter the address: ");
        scanf("%s", &(stu + i)->address);
        printf("enter the marks for c: ");
        scanf("%d", &(stu + i)->cMark);
        printf("enter the marks for Information System: ");
        scanf("%d", &(stu + i)->iSysMark);
    }

    // adding marks of all students
    for (j = 0; j < noOfStu; j++)
    {
        total += ((stu + j)->cMark + (stu + j)->iSysMark);
    }
    printf("the total marks of all student is %d", total);
}