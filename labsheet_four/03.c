#include<stdio.h>
float product(int num1,float num2){
    return num1 * num2;
}
int main(){
    int num1;
    float num2;
    printf("Enter the integer: ");
    scanf("%d",&num1);
    printf("Enter the floating number: ");
    scanf("%f",&num2);
    float result = product(num1,num2);
    printf("the product is %.2f",result);
    return 0;
}