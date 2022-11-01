#include<stdio.h>
int sum(int num){
    if(num == 0){
        return 0;
    }
    return num + sum(num - 1);
}
int main(){
    int num;
    printf("Enter the num upto which you want sum: ");
    scanf("%d",&num);
    int result = sum(num);
    printf("The result is %d",result);
    return 0;
}