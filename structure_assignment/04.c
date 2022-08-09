#include <stdio.h>
struct Student
{
    char name[30];
    int roll;
    int marks;
    char remarks[50];
};
int main()
{
    struct Student stu[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the name: ");
        scanf("%s", stu[i].name);
        printf("enter the roll no: ");
        scanf("%d", &stu[i].roll);
        printf("enter the marks: ");
        scanf("%d", &stu[i].marks);
        printf("enter the remarks: ");
        scanf("%s", stu[i].remarks);
    }

    // printing the entered information
    for (int i = 0; i < 10; i++)
    {
        printf("----------------------------------\n");
        printf("name: %s\n", stu[i].name);
        printf("roll no.: %d\n", stu[i].roll);
        printf("marks: %d\n", stu[i].marks);
        printf("remarks: %s\n", stu[i].remarks);
    }
}
