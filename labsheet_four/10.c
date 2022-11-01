#include<stdio.h>
int power(int base,int basePower){
    if(basePower != 0){
        return base * power(base,basePower-1);
    } else {
        return 1;
    }
}
int main(){
    int base,basePower,result;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the power number: ");
    scanf("%d",&basePower);
    result = power(base,basePower);
    printf("%d^%d = %d",base,basePower,result);
}