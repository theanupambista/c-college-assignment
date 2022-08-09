#include<stdio.h>

int main(){
    int num,sum=0;
    int quotient, remainder;
    printf("Enter the five digit number: ");
    scanf("%d",&num);
    while(num>0){
        quotient = num / 10;
        remainder = num % 10;
        num = quotient;
        sum += remainder;
    }
    printf("The total sum is %d",sum);
    return 0;
}