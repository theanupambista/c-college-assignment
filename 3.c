#include<stdio.h>
int main(){
    int principal,time,rate,simpleInterest;
    principal = 1000;
    time = 2;
    rate = 10;
    simpleInterest = (principal * time * rate)/100;
    printf("Simple interest = %d",simpleInterest);
    return 0;
}