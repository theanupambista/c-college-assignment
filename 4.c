#include<stdio.h>
int main(){
    float num1, num2;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    printf("Addition: (%.2f + %.2f) = %.2f\n",num1,num2,(num1+num2));
    printf("Subtraction: (%.2f - %.2f) = %.2f\n",num1,num2,(num1-num2));
    printf("Product: (%.2f x %.2f) = %.2f\n",num1,num2,(num1*num2));
    if(num2 == 0)
        printf("Division: (%.2f / %.2f) = infinity\n",num1,num2);
    else
        printf("Division: (%.2f / %.2f) = %.2f\n",num1,num2,(num1/num2));
    return 0;
}