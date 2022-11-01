#include<stdio.h>
int main(){
    int num,factorial = 1;
    printf("Enter the num: ");
    scanf("%d",&num);
    while(num>0){
        factorial = factorial * num;
        num--;
    }
    printf("The factorial is %d",factorial);
    return 0;
}
