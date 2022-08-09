#include<stdio.h>
int main(){
    int num1,num2;
    int result;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    result = (num1 > num2) ? num1 + num2 : num1-num2;
    printf("The result is %d",result);
    return 0;
}