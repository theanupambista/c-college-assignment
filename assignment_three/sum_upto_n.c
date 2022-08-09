#include<stdio.h>
int main(){
    int num,result=0;
    printf("Enter the num:");
    scanf("%d",&num);
    while(num>0){
        result += num;
        num--;
    }
    printf("Total sum is %d",result);
    return 0;
}