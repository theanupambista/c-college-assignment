#include<stdio.h>
int findLargestNum(int num1,int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }else if(num2>num1 && num2>num3){
        return num2;
    }else if(num3>num1 && num3>num2){
        return num3;
    }
}
int main(){
    int num1,num2,num3;
    printf("enter the first num: ");
    scanf("%d",&num1);
    printf("enter the second num: ");
    scanf("%d",&num2);
    printf("enter the third num: ");
    scanf("%d",&num3);
    int largest = findLargestNum(num1,num2,num3);
    printf("the largest numbers is %d",largest);
}