#include<stdio.h>
int main(){
    int num1,num2,num3;
    int min,max;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    max = num1;
    min = num2;
    if(num1<num2){
        max = num2;
        min = num1;
    }
    if(max<num3){
        max = num3;
    }
    if(num3<min)
        min = num3;
    printf("The difference between max and min i.e %d-%d=%d",max,min,max-min);

}