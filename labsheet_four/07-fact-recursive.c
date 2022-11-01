#include<stdio.h>
int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num * factorial(num - 1);
}
int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);
    int result = factorial(num);
    printf("The result is %d",result);
    return 0;
}