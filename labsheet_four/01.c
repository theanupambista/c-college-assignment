#include<stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
int main(){
    int num1,num2;
    printf("Enter first num: ");
    scanf("%d",&num1);
    printf("Enter the second num: ");
    scanf("%d",&num2);
    add(num1,num2);
    sub(num1,num2);
    mul(num1,num2);
    div(num1,num2);
}
void add(int num1,int num2){
    printf("Addition: %d\n",num1+num2);
}
void sub(int num1,int num2){
    printf("Subtraction: %d\n",num1-num2);
}
void mul(int num1,int num2){
    printf("Multiplication: %d\n",num1*num2);
}
void div(int num1,int num2){
    printf("Division: %d\n",num1/num2);
}