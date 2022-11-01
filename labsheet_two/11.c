#include<stdio.h>
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("the cube of %d is %d",num,num*num*num);
    }else{
        printf("the square of %d is %d",num, num*num);
    }
    return 0;
}