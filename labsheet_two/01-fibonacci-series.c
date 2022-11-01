#include<stdio.h>

int main(){
    int firstNum = 1;
    int secondNum = 2;
    printf("%d %d ",firstNum,secondNum);
    for(int i=3;i<10;i++){
        int sum = firstNum + secondNum;
        printf("%d ",sum);
        firstNum = secondNum;
        secondNum = sum;
    }
}