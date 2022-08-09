#include<stdio.h>
int main(){
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    if(num>0){
        printf("The number is positive.");
    } else {
        printf("The number is negative.");
    }
    return 0;
}