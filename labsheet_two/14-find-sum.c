#include<stdio.h>
int main(){
    int remainder,quotient,result=0;
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
    while(num != 0){
        remainder = num % 10;
        result += remainder;
        quotient = num / 10;
        num = quotient;
    }
    printf("the sum of each digits is %d",result);
    return 0;
}