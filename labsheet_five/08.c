#include<stdio.h>
int main(){
    union student{
        int roll;
        int marks;
    }stu;
    stu.roll = 6;
    printf("roll: %d\n",stu.roll);
    stu.marks = 100;
    printf("marks: %d\n",stu.marks);
    return 0;
}