#include<stdio.h>
int main(){
    struct student{
        char name[20];
        int totalMarks;
        char grade;
    };
    struct student stu1 = {"Ram",100,'C'};
    struct student stu2 = {"Sita",120,'B'};
    struct student stu3 = {"Gita",130,'B'};
    struct student stu4 = {"Gopal",150,'A'};
    printf("%s %d %c\n",stu1.name,stu1.totalMarks,stu1.grade);
    printf("%s %d %c\n",stu2.name,stu2.totalMarks,stu2.grade);
    printf("%s %d %c\n",stu3.name,stu3.totalMarks,stu3.grade);
    printf("%s %d %c\n",stu4.name,stu4.totalMarks,stu4.grade);
}