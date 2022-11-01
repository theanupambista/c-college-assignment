#include<stdio.h>
int main(){
    int num,result=1;
    int remainder, quotient;
    printf("Enter the num: ");
    scanf("%d",&num);
    while(num != 0){
        remainder = num % 10;
        result = result * remainder;
        quotient = num / 10;
        num = quotient;
    }
    printf("the result is %d",result);
}