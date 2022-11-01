#include<stdio.h>
int main(){
    struct student{
        char name[20];
        int roll;
        int marks;
    }stu[5];
    for(int i=0;i<5;i++){
        printf("Enter the name: ");
        scanf("%s",stu[i].name);
        printf("Enter the roll: ");
        scanf("%d",&stu[i].roll);
        printf("Enter the marks: ");
        scanf("%d",&stu[i].marks);
        printf("\n");
    }
    for(int i=0;i<5;i++){
        if(stu[i].marks > 50){
            printf("Name: %s\n",stu[i].name);
            printf("Roll: %d\n",stu[i].roll);
            printf("Marks: %d\n",stu[i].marks);
            printf("\n");
        }
    }
}