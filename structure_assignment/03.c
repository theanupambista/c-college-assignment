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
    struct Student stu;
    printf("enter the name: ");
    scanf("%s", &stu.name);
    printf("enter the roll no: ");
    scanf("%d", &stu.roll);
    printf("enter the marks: ");
    scanf("%d", &stu.marks);
    printf("enter the remarks: ");
    scanf("%s", &stu.remarks);
    // printing the entered information

    printf("the student details is given below\n");
    printf("name: %s\n", stu.name);
    printf("roll no.: %d\n", stu.roll);
    printf("marks: %d\n", stu.marks);
    printf("remarks: %s\n", stu.remarks);
}
