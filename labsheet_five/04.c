#include<stdio.h>
#include<string.h>
int main(){
    struct employee{
        char name[20];
        char address[20];
        int salary;
    }emp[5],tempEmp;
    for(int i=0;i<5;i++){
        printf("Enter the name: ");
        scanf("%s",emp[i].name);
        printf("Enter the address: ");
        scanf(" %s",emp[i].address);
        printf("Enter the salary: ");
        scanf("%d",&emp[i].salary);
        printf("\n");
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(emp[i].name,emp[j].name)>0){
                tempEmp = emp[i];
                emp[i] = emp[j];
                emp[j] = tempEmp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("Name: %s\n",emp[i].name);
        printf("Roll: %d\n",emp[i].address);
        printf("Marks: %d\n",emp[i].salary);
        printf("\n");
    }
}