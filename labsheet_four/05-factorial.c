#include<stdio.h>
long int factorial(int num){
    long int result=1;
    while(num>0){
        result *= num;
        num--;
    }
}
int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);
    int result = factorial(num);
    printf("the factorial of %d is %d",num,result);
}