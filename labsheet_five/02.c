#include<stdio.h>
int main(){
    struct student{
        char name[20];
        int roll;
        int marks;
        char remarks[20];
    }stu1;
    printf("Enter the name: ");
    gets(stu1.name);
    printf("Enter the roll number: ");
    scanf("%d",&stu1.roll);
    printf("Enter the marks: ");
    scanf("%d",&stu1.marks);
    printf("Enter the remarks: ");
    scanf(" %s",stu1.remarks);

    printf("Student Record: \n");
    printf("Name: %s\n",stu1.name);
    printf("Roll: %d\n",stu1.roll);
    printf("Marks: %d\n",stu1.marks);
    printf("Remarks: %s\n",stu1.remarks);
}