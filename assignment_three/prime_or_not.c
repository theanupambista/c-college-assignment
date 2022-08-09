#include<stdio.h>
int main(){
    int num,i;
    printf("Enter the num:");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("Not a prime number.");
            break;
        }
    }
    if(i==num)
        printf("given number is prime.");
}