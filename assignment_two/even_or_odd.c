#include<stdio.h>
int main(){
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    if(num%2==0){
        printf("The number is even.");
    } else {
        printf("The number is odd.");
    }
}