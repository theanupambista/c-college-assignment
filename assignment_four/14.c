#include<stdio.h>
int main(){
    int num1;
    int num2;
    int temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1: %d\nnum2:%d",num1,num2);
    return 0;
}