#include<stdio.h>
int main(){
    int num;
    int quotient, remainder;
    printf("Enter the num:");
    scanf("%d",&num);
    while (num>0)
    {
        quotient = num / 10;
        remainder = num % 10;
        printf("%d",remainder);
        num = quotient;   
    }
    
}