// wap a program to divide one integer by another integer and find the quotient and remainder.

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("Quotient: %d/%d=%d\n",num1,num2,num1/num2);
    printf("Remainder: %d%%%d=%d\n",num1,num2,num1%num2);
    return 0;
}